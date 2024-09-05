#include <iostream>
using namespace std;

int main()
{
    int arr[5][3] = {100, 12, 1, 200, 23, 2, 300, 46, 3, 100, 26, 4, 500, 16, 5};

    // Print array row wise.
    cout << "Row wise array is:\n";
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Print array col wise.
    cout << "Col wise array is:\n";
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 5; row++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}