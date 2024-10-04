//* Combination Sum-II link:- https://leetcode.com/problems/combination-sum-ii/description/
//* Visualization:- https://excalidraw.com/#json=htLq5ziFDL9zUN1-zM4Cb,x5dW_mAext9NcJGkaiiW5Q
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCombinations(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int target, int index)
{
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }

    if (target < 0 || index == nums.size())
        return;

    for (int i = index; i < nums.size(); i++)
    {
        if (i > index && nums[i] == nums[i - 1])
            continue;

        temp.push_back(nums[i]);
        findCombinations(nums, ans, temp, target - nums[i], i + 1);
        temp.pop_back();
    }
}

int main()
{
    system("clear");
    vector<int> nums = {10, 1, 2, 7, 6, 1, 5}; // Target:- 8 Output:- [[1,1,6],[1,2,5],[1,7],[2,6]]
    // vector<int> nums = {2, 5, 2, 1, 2};        // Target:- 5 Output:- [[1,2,2],[5]]
    // vector<int> nums = {2, 1, 2, 1, 1};        // Target:- 4 Output:- [[1,1,2], [2,2]]

    vector<vector<int>> ans;
    vector<int> temp;
    int target = 8;

    sort(nums.begin(), nums.end());

    findCombinations(nums, ans, temp, target, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}