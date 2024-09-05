#include <iostream>
using namespace std;

void PrintCol(int arr[][4], int row, int col)
{
    cout << "Col wise element in array:\n";
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << endl;

    // Print all the element in array col wise, function call.
    PrintCol(arr, 3, 4);
}