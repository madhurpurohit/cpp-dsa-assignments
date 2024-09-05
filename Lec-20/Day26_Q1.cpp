#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], size;

    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the element in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting the array is: ";
    PrintArray(arr, size);
    cout << endl;

    cout << "After sorting the array is: ";
    BubbleSort(arr, size);
    PrintArray(arr, size);
}