//* Target sum.
#include <iostream>
using namespace std;

bool findTargetSum(int arr[], int index, int size, int x)
{
    if (x == 0)
        return 1;
    if (index == size || x < 0)
        return 0;

    return findTargetSum(arr, index + 1, size, x) || findTargetSum(arr, index + 1, size, x - arr[index]);
}

int main()
{
    system("clear");
    // int arr[] = {3, 6, 4, 5};
    int arr[] = {2, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]), target;
    cout << "Enter target sum: ";
    cin >> target;

    cout << "Your target sum isPresented: " << findTargetSum(arr, 0, size, target) << endl;

    return 0;
}