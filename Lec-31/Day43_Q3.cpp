#include <iostream>
using namespace std;

int Diagonalarr(int arr[][4], int x, int y)
{
    int first = 0, second = 0;
    for (int row = 0; row < x; row++)
    {
        first += arr[row][row];
    }

    int i = 0, j = x - 1;
    while (j >= 0)
    {
        second += arr[i][j];
        i++;
        j--;
    }
    int sum = first + second;

    cout << "Sum of Diagonal of arr is: " << sum << endl;
    cout << endl;
}

int Diagonalarr1(int arr1[][5], int x, int y)
{
    int first = 0, second = 0;
    for (int row = 0; row < x; row++)
    {
        first += arr1[row][row];
    }

    int i = 0, j = x - 1;
    while (j >= 0)
    {
        second += arr1[i][j];
        i++;
        j--;
    }
    int sum = first + second;

    if (x % 2 != 0)
    {
        int a = (x / 2);
        sum -= arr1[a][a];
    }

    cout << "Sum of Diagonal of arr1 is: " << sum << endl;
}

void Printarr(int arr[][4], int x, int y)
{
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < y; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void Printarr1(int arr1[][5], int x, int y)
{
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < y; col++)
        {
            cout << arr1[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[4][4] = {5, 8, 3, 9, 6, 2, 8, 4, 5, 3, 2, 2, 2, 8, 1, 9};
    int arr1[5][5] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    cout << endl;

    // Printarr(arr, 4, 4);
    // Diagonalarr(arr, 4, 4);

    Printarr1(arr1, 5, 5);
    Diagonalarr1(arr1, 5, 5);
}
