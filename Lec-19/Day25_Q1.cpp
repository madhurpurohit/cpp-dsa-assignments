#include <iostream>
#include <cstdlib>
using namespace std;

void selection_sort_decreasing(int sort[], int n);
void print(int arr[], int size);

int main()
{
    system("clear");
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter element in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    selection_sort_decreasing(arr, size);
    print(arr, size);
}

void selection_sort_decreasing(int sort[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sort[i] < sort[j])
                swap(sort[i], sort[j]);
        }
    }
}

void print(int arr[], int size)
{
    cout << "Array after sroting in decreasing order: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}