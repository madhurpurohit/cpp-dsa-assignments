/* Problem:- Max difference between 2 element.
Statement:- Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element.
Example:- Size of array: 8
        Element in array: 9 5 8 12 2 3 7 4
        Output: 7
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int brute_force(vector<int> arr)
{
    // The TC of this approach is O(N^2).
    int ans = INT_MIN;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
            ans = max(ans, arr[j] - arr[i]);
    }
    return ans;
}

int optimal_lengthy(vector<int> arr)
{
    // The TC of this approach is O(N).
    vector<int> suffix_max(arr.size());
    int maximum = INT_MIN;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        maximum = max(maximum, arr[i]);
        suffix_max[i] = maximum;
    }

    // cout << "Suffix max array is: ";
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << suffix_max[i] << " ";
    // }
    // cout << endl;

    maximum = INT_MIN;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        maximum = max(maximum, suffix_max[i + 1] - arr[i]);
    }
    return maximum;
}

int optimal_shortly(vector<int> arr)
{
    int suffix = INT_MIN, difference = INT_MIN;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        suffix = max(suffix, arr[i]);
        difference = max(difference, suffix - arr[i]);
    }
    return difference;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "TC:- O(N^2) is: " << optimal_lengthy(v) << endl;                                 // This is not an optimal solution.
    cout << "TC:- O(N) but with the help of multiple loops is: " << brute_force(v) << endl;   // This is not optimal solution.
    cout << "TC:- O(N) but with the help of single loops is: " << optimal_shortly(v) << endl; // This is not optimal solution.
}