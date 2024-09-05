// todo Binary search in 2D array which is sorted in decreasing order. N is the number of rows & M is the number of columns.

// #include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

// Time Complexity of this method is: O(N+M) Or O(row+col).
void binary_search_vector(vector<vector<int>> arr, int search)
{
    int row = arr.size(), col = arr[0].size();
    int start = 0, end = col - 1;
    while (start < row && end >= 0)
    {
        if (arr[start][end] == search)
        {
            cout << "Gotha!" << endl;
            return;
        }
        else if (arr[start][end] > search)
            start++;
        else
            end--;
    }
    cout << "Not found!" << endl;
}

int main()
{
    system("clear");
    vector<vector<int>> matrix(4, vector<int>(5, 0));
    cout << "Enter " << 4 * 5 << " element: ";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int x;
    cout << "Enter search element: ";
    cin >> x;

    binary_search_vector(matrix, x);
}