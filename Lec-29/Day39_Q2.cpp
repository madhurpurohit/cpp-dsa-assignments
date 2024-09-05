// Prefix sum.
#include <iostream>
#include <vector>
using namespace std;

void PrefixSum(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
}

void InputArray(int arr[], int n)
{
    cout << "Element in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

int main()
{
    int n;
    cout << endl;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];

    InputArray(arr, n);

    PrefixSum(arr, n);

    cout << "Array after prefix sum: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}