//* Given an array of size n, print all the sums possible from its subsequence.
//* Problem link:- https://www.geeksforgeeks.org/problems/subset-sums2234/1
#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int index, int size, int sum, vector<int> &ans)
{
    if (index == size)
    {
        ans.push_back(sum);
        return;
    }

    // Not included.
    subSequence(arr, index + 1, size, sum, ans);

    // Included.
    subSequence(arr, index + 1, size, sum + arr[index], ans);
}

int main()
{
    system("clear");
    int arr[] = {1, 2, 3};

    vector<int> ans;

    subSequence(arr, 0, 3, 0, ans);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}