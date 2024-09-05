// Suffix sum.
#include <iostream>
#include <vector>
using namespace std;

void SuffixSum(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i] = arr[i] + arr[i + 1];
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

    SuffixSum(arr, n);

    cout << "Array after suffix sum: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}