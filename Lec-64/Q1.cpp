//* Permutation of an array.Time complexity: O(N*N!), Space Complexity: O(n!).
//* Visualization:- https://excalidraw.com/#json=pQn4p9P6tyPq0dR7rLNoz,4sntibdXKkmB1P0v2tEn-Q
#include <iostream>
#include <vector>
using namespace std;

//? With using arr, ans, temp & visited vector.
void findPermutation(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    if (visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            findPermutation(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

//? With using only arr & ans.
void findPermutation(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i], nums[index]);
        findPermutation(nums, ans, index + 1);
        swap(nums[i], nums[index]);
    }
}

void printPermutation(vector<vector<int>> &ans)
{
    int count = 1;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << count << " = ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        count++;
        cout << endl;
    }
}

int main()
{
    system("clear");
    // vector<int> arr = {1, 2, 3};
    vector<int> arr = {1, 2, 3, 4};

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(arr.size(), 0);

    //! With using temp & visited vector.
    findPermutation(arr, ans, temp, visited);

    // Print all permutation.
    printPermutation(ans);

    //! Without using temp & visited vector.
    vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> ans1;
    int index = 0;
    findPermutation(nums, ans1, index);

    // Print all permutation.
    printPermutation(ans1);

    return 0;
}