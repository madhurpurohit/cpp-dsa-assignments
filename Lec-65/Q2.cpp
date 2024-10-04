//* Given a set of m distinct positive integers and a value ‘N’. Count the total number of ways we can form ‘N’ by  adding the array elements. Repetitions and different arrangements are allowed.
//* Note : Answer can be quite large output the answer modulo 109 + 7.
#include <iostream>
#include <vector>
using namespace std;

int waysToSum(vector<int> &arr, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        return 0;

    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += waysToSum(arr, n - arr[i]);
    }

    return ans;
}

int main()
{
    system("clear");
    vector<int> arr = {1, 5, 6}; // Expected Output:- 6. For n=7.
    int n = 7;
    // cout << "Enter sum: ";
    // cin >> n;

    cout << "Total number of ways to sum " << n << " is: " << waysToSum(arr, n) << endl;

    return 0;
}