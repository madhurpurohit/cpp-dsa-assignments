//* Given an array of size N, Print subset sum and corresponding to it, print the given subset also.
//* Ex : arr[1, 2] output : Sum Subset 1 1 2 2 3 1 2
#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int index, int size, int sum, vector<vector<int>> &subset, vector<int> &ans, vector<int> &temp)
{
    if (index == size)
    {
        ans.push_back(sum);
        subset.push_back(temp);
        return;
    }

    // left subsequences.
    subSequence(arr, index + 1, size, sum, subset, ans, temp);

    // right subsequences.
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, size, sum + arr[index], subset, ans, temp);
    temp.pop_back();
}

int main()
{
    system("clear");
    int arr[] = {3, 4, 5};

    vector<vector<int>> subset;
    vector<int> ans;
    vector<int> temp;

    subSequence(arr, 0, 3, 0, subset, ans, temp);

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