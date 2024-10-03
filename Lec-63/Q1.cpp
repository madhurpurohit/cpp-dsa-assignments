//* Perfect Sum. This problem give as an TLE error because here our TC is O(2^N) & it will give expected TC is O(N*target). So we can solve this problem with Dynamic Programming.
// todo link:- https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

int findPerfectSum(int arr[], int index, int size, int target)
{
    // if (index == size)
    // {
    //     if (target == 0)
    //         return 1;
    //     else
    //         return 0;
    // }
    // todo We can write the above code within less line.
    if (index == size)
        return target == 0; //? This will give the same output between 0 or 1.

    return (findPerfectSum(arr, index + 1, size, target) + findPerfectSum(arr, index + 1, size, target - arr[index])) % MOD;
}

int main()
{
    system("clear");
    // int arr[] = {5, 2, 3, 6, 10, 8}; Target:- 8, 10 Output:- 3
    // int arr[] = {1, 0}; // Target:- 1 Output:- 2
    int arr[] = {9, 9, 3, 8, 4, 7, 8}; // Target:- 29 Output:- 5
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target sum: ";
    cin >> target;

    cout << "Total subset, which sum is equal to " << target << " is: " << findPerfectSum(arr, 0, size, target) << endl;

    return 0;
}