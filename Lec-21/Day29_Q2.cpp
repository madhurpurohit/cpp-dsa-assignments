#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    // From start to end.(Increasing Order).
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Input element in array.
    cout << "Enter element in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Print array.
    cout << "Array before sorting: ";
    PrintArray(arr, n);

    // Sorting array.
    cout << "Array after sorting: ";
    InsertionSort(arr, n);
    PrintArray(arr, n);
}