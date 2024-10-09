//* Rat in a maze. Time Complexity is O(3^N^2) & Space Complexity is O(N^2).
//* links:- https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
// todo Visualization link:- https://excalidraw.com/#json=jkpdpKGmjqwViITioKRNZ,7JouHsaD-4bl0u7ufV3JYQ
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool valid(int i, int j, int n)
{
    // if ((i >= 0 && i < n) && (j >= 0 && j < n))
    //     return 1;
    // else
    //     return 0;
    return i >= 0 && j >= 0 && i < n && j < n;
}

//* Method-1:- It is lengthy method.
void totalPath(vector<vector<int>> &matrix, int i, int j, vector<string> &ans, string path, vector<vector<bool>> &visited)
{
    int n = matrix.size();
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[i][j] = 1;

    // Up
    if (valid(i - 1, j, n) && matrix[i - 1][j] && !visited[i - 1][j])
    {
        path.push_back('U');
        totalPath(matrix, i - 1, j, ans, path, visited);
        path.pop_back();
    }

    // Down
    if (valid(i + 1, j, n) && matrix[i + 1][j] && !visited[i + 1][j])
    {
        path.push_back('D');
        totalPath(matrix, i + 1, j, ans, path, visited);
        path.pop_back();
    }

    // Left
    if (valid(i, j - 1, n) && matrix[i][j - 1] && !visited[i][j - 1])
    {
        path.push_back('L');
        totalPath(matrix, i, j - 1, ans, path, visited);
        path.pop_back();
    }

    // Right
    if (valid(i, j + 1, n) && matrix[i][j + 1] && !visited[i][j + 1])
    {
        path.push_back('R');
        totalPath(matrix, i, j + 1, ans, path, visited);
        path.pop_back();
    }
    visited[i][j] = 0;
}

//* Method-2:- It is short & clear.
const int row[4] = {-1, 1, 0, 0};
const int col[4] = {0, 0, -1, 1};
const string direction = "UDLR";

void totalPath2(vector<vector<int>> &matrix, int i, int j, vector<string> &ans, string path, vector<vector<bool>> &visited)
{
    int n = matrix.size();
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;

    for (int k = 0; k < 4; k++)
    {
        if (valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
        {
            path.push_back(direction[k]);
            totalPath2(matrix, i + row[k], j + col[k], ans, path, visited);
            path.pop_back();
        }
    }
    visited[i][j] = 0;
}

int main()
{
    system("clear");
    // vector<vector<int>> matrix = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<vector<int>> matrix = {{1, 0, 1}, {1, 1, 1}, {1, 1, 1}};

    vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix[0].size(), 0));
    vector<string> ans;
    string path;
    int n = matrix.size();

    // ! If first element is 0 than we can't move further & if last element is 0 than also we can't reach to goal. Example:- {{0,1},{1,1}} Or {{1,1},{1,0}}.
    if (matrix[0][0] == 0 || matrix[n - 1][n - 1])
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << endl;
    }

    totalPath(matrix, 0, 0, ans, path, visited);
    cout << "The total ways to reach the goal is: " << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    cout << endl;

    vector<string> ans1;
    vector<vector<bool>> visited1(matrix.size(), vector<bool>(matrix[0].size(), 0));
    string path1;

    totalPath2(matrix, 0, 0, ans1, path1, visited1);
    cout << "The total ways to reach the goal is: " << endl;
    for (int i = 0; i < ans1.size(); i++)
        cout << ans1[i] << endl;

    return 0;
}