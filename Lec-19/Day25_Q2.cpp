#include <iostream>
#include <cstdlib>
using namespace std;

void selection_sort_increasing(int sort[], int n);
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

    selection_sort_increasing(arr, size);
    print(arr, size);
}

void selection_sort_increasing(int sort[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (sort[i] < sort[j])
                swap(sort[i], sort[j]);
        }
    }
}

void print(int arr[], int size)
{
    cout << "Array after sroting in increasing order: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}