//* Given an array in non-increasing order, an element is given X, find if that element is present in the array or not. print 1 if its present else print 0.
#include <iostream>
using namespace std;

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

int main()
{
    system("clear");
    int arr[7] = {7, 5, 4, 4, 3, 2, 1};
    int element;
    cout << "Enter element: ";
    cin >> element;

    cout << "The element " << element << " isPresented: " << binarySearch(arr, 0, 6, element) << endl;

    return 0;
}