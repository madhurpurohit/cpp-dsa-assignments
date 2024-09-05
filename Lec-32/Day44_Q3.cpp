#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Create 2D Vector.
    vector<vector<int>> matrix(n, vector<int>(m, 1));

    cout << "Enter element in " << n << " x " << m << " array:\n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin >> matrix[row][col];
        }
    }

    // Print array.
    cout << "The 2D Vector Array is:\n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // Convert array in wave form.
    cout << "The 2D Vector Wave Array is:\n";
    for (int col = 0; col < m; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; row++)
            {
                cout << matrix[row][col] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << matrix[row][col] << " ";
            }
            cout << endl;
        }
    }
}