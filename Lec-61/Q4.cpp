//* Given an array of size n, print all the sums possible from its subsequence.
//* Problem link:- https://www.geeksforgeeks.org/problems/subset-sums2234/1
#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int index, int size, vector<vector<int>> &subset, vector<int> &ans, vector<int> &temp)
{
    if (index == size)
    {
        int sum = 0;
        for (int i = 0; i < temp.size(); i++)
            sum = sum + temp[i];
        ans.push_back(sum);
        subset.push_back(temp);
        return;
    }

    // left subsequences.
    subSequence(arr, index + 1, size, subset, ans, temp);

    // right subsequences.
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, size, subset, ans, temp);
    temp.pop_back();
}

int main()
{
    system("clear");
    int arr[] = {1, 2, 3};

    vector<vector<int>> subset;
    vector<int> ans;
    vector<int> temp;

    subSequence(arr, 0, 3, subset, ans, temp);

    for (int i = 0; i < subset.size(); i++)
    {
        for (int j = 0; j < subset[i].size(); j++)
        {
            cout << subset[i][j];
            if (j != subset[i].size() - 1)
                cout << " + ";
        }
        cout << " = " << ans[i] << endl;
    }

    return 0;
}