// #include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &arr, int k)
{
    int row = arr.size(), col = arr[0].size();
    int rotate = k % 4;

    // Check rotate is not equal to 0.
    if (rotate == 0)
        return;

    while (k)
    {
        // Transpose Matrix.
        for (int i = 1; i < row; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }

        // Reverse row.
        for (int i = 0; i < row; i++)
        {
            int start = 0, end = col - 1;
            while (start < end)
            {
                swap(arr[i][start], arr[i][end]);
                start++, end--;
            }
        }
        k--;
    }
}

int main()
{
    system("clear");
    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter cols: ";
    cin >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    int k;
    cout << "Enter rotation: ";
    cin >> k;

    // Input element.
    cout << "Enter " << row * col << " element in array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Print matrix.
    cout << "Your matrix is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotate(matrix, k);
    // Print matrix.
    cout << "Your matrix after " << k << " rotation: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}