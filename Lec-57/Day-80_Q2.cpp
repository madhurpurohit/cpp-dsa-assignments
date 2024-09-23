//* Write a recursive function to reverse the elements of an array.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

int main()
{
    system("clear");
    int arr[7] = {8, 6, 4, 4, 3, 2, 1};

    reverseArray(arr, 0, 6);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}