//* Target sum repetition. If 1<=arr[i]<=1000.
// todo If arr[i] include 0 than it will stuck in infinite recursive call & give segmentation fault or stack overflow.
//* Time complexity:- O(2^N)
//* Space Complexity:- O(N) (due to the recursive call stack).
#include <iostream>
using namespace std;

int findTargetSum(int arr[], int index, int size, int sum)
{
    if (sum == 0)
        return 1;
    if (index == size || sum < 0)
        return 0;

    int exclude = findTargetSum(arr, index + 1, size, sum);
    int include = findTargetSum(arr, index, size, sum - arr[index]);

    return (exclude + include);
}

int main()
{
    system("clear");
    // int arr[] = {2, 3, 4};
    int arr[] = {1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target sum: ";
    cin >> target;

    cout << "Total target sum with repetition is: " << findTargetSum(arr, 0, size, target) << endl;

    return 0;
}