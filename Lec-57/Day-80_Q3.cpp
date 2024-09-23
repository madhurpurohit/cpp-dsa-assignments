//* Write a recursive function to rotate elements in an array to the right by 1 position.
#include <iostream>
using namespace std;

void rotateArray(int arr[], int end, int value)
{
    if (end == 0)
    {
        arr[end] = value;
        return;
    }

    arr[end] = arr[end - 1];
    rotateArray(arr, end - 1, value);
}

int main()
{
    system("clear");
    int arr[7] = {8, 6, 4, 4, 3, 2, 1};

    cout << "Array before rotation is:" << endl;
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;

    rotateArray(arr, 6, arr[6]);

    cout << "Array after rotation is:" << endl;
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}