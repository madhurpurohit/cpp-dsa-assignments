//* Find element in non-increasing array using recursion.
#include <iostream>
using namespace std;

//? Return Yes if element is present otherwise return No.
string binarySearch(int arr[], int start, int end, int x)
{
    if (start > end)
        return "No";

    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
        return "Yes";
    else if (arr[mid] < x)
        return binarySearch(arr, start, mid - 1, x);
    else
        return binarySearch(arr, mid + 1, end, x);
}

//? Return index if element is present otherwise return -1.
int binarySearchIndex(int arr[], int start, int end, int x)
{
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return binarySearchIndex(arr, start, mid - 1, x);
    else
        return binarySearchIndex(arr, mid + 1, end, x);
}

int main()
{
    system("clear");
    int arr[6] = {10, 8, 7, 7, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element, start = 0, end = size - 1;
    cout << "Enter search element: ";
    cin >> element;

    cout << "The element " << element << " isPresented: " << binarySearch(arr, start, end, element) << endl;
    cout << "The element " << element << " is present at index: " << binarySearchIndex(arr, start, end, element) << endl;

    return 0;
}