#include <iostream>
using namespace std;

void practice(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "The sum of " << i << " column is: " << sum << endl;
    }
}

int main()
{
    int arr[3][4] = {2, 3, 4, 5, 1, 2, 6, 8, 4, 9, 3, 2};
    int sum[4] = {0};

    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            // cout << arr[row][col] << " ";
            sum[col] += arr[row][col];
        }
        // cout << "The sum is: " << sum[col] << endl;
    }

    for (int col = 0; col < 4; col++)
    {
        cout << "Sum of column " << col + 1 << " : " << sum[col] << endl;
    }

    practice(arr, 3, 4);
}
