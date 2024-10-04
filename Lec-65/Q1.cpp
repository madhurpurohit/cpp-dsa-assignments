//* Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
//* Problem Link:- https://leetcode.com/problems/permutations-ii/description/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//? Method1:- We can firstly find all permutations and fill them in ans vector. After that we can sort & remove duplicate array.
void findPermutation(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
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
            temp.push_back(nums[i]);
            findPermutation(nums, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

void method1()
{
    vector<int> nums = {1, 2, 1};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(nums.size(), 0);
    findPermutation(nums, ans, temp, visited);

    sort(ans.begin(), ans.end());

    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    int count = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << count << " = ";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        count++;
        cout << endl;
    }
}

//? Method2:- Here we simply track the index element that we already use this or not.
void findPermutation(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    vector<bool> visited(21, 0);
    for (int i = index; i < nums.size(); i++)
    {
        if (visited[nums[i] + 10] == 0)
        {
            visited[nums[i] + 10] = 1;
            swap(nums[i], nums[index]);
            findPermutation(nums, ans, index + 1);
            swap(nums[i], nums[index]);
        }
    }
}

void method2()
{
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> ans;
    findPermutation(nums, ans, 0);

    // Print all the unique permutations.
    int count = 1;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << count << " = ";
        for (int j = 0; j < ans[0].size(); j++)
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
    cout << "Output with Method-1 is:" << endl;
    method1();
    cout << endl;

    cout << "Output with Method-2 is:" << endl;
    method2();

    return 0;
}