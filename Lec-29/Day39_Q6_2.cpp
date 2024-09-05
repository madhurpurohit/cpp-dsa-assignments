/* Problem:- Max difference between 2 element.
Statement:- Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element.
Example:- Size of array: 8
        Element in array: 9 5 8 12 2 3 7 4
        Output: 7
*/

// todo Using Kadane's Algorithm.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxDiff(vector<int> arr, int n)
{
    // Initialize diff, current sum and max sum
    int diff = arr[1] - arr[0];
    int curr_sum = diff;
    int max_sum = curr_sum;

    for (int i = 1; i < n - 1; i++)
    {
        // Calculate current diff
        diff = arr[i + 1] - arr[i];

        // Calculate current sum
        if (curr_sum > 0)
            curr_sum += diff;
        else
            curr_sum = diff;

        // Update max sum, if needed
        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }

    return max_sum;
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
    cout << "TC:- O(N) but with the help of Kadane's Algorithm is: " << maxDiff(v, n) << endl;
}