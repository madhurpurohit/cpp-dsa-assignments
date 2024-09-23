//* Find element in array using recursion with linear search & binary search.
#include <iostream>
using namespace std;

string linearSearch(int arr[], int index, int target)
{
    if (index < 0)
        return "No";
    if (arr[index] == target)
        return "Yes";

    return linearSearch(arr, index - 1, target);
}

string binarySearch(int arr[], int start, int end, int target)
{
    if (start > end)
        return "No";

    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return "Yes";

    else if (arr[mid] < target)
        return binarySearch(arr, mid + 1, end, target);

    else
        return binarySearch(arr, start, mid - 1, target);
}

int main()
{
    system("clear");
    // int arr[7] = {2, 4, 7, 3, 11, 8, 12};
    int arr[6] = {3, 8, 11, 15, 20, 22};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element;
    cout << "Enter search element: ";
    cin >> element;

    //? Using linear Search.
    cout << "The element " << element << " isPresent: " << linearSearch(arr, size - 1, element) << endl;

    //? Using Binary Search.
    int start = 0, end = size - 1;

    cout << "The element " << element << " isPresent: " << binarySearch(arr, start, end, element) << endl;

    return 0;
}