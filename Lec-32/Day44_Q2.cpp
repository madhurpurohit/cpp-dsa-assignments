#include <iostream>
using namespace std;

int main()
{
    int arr[5][5] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};

    // Print array row wise.
    cout << "Row wise array is:\n";
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Reverse col element.
    for (int col = 0; col < 5; col++)
    {
        for (int row = 0; row < 5 / 2; row++)
        {
            swap(arr[row][col], arr[4 - row][col]);
        }
    }

    cout << "Row wise array is:\n";
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
}