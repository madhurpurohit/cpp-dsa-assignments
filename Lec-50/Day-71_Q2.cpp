//* Dynamically create 4D arrays in C++.
#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int p4, p3, p2, p1;
    cout << "Enter the value of p4, p3, p2, p1: ";
    cin >> p4 >> p3 >> p2 >> p1;

    //* Crete 4D array.
    int ****arr = new int ***[p4];

    for (int i = 0; i < p4; i++)
    {
        arr[i] = new int **[p3];
        for (int j = 0; j < p3; j++)
        {
            arr[i][j] = new int *[p2];
            for (int k = 0; k < p2; k++)
            {
                arr[i][j][k] = new int[p1];
            }
        }
    }

    //* Value in 4D array.
    for (int i = 0; i < p4; i++)
    {
        for (int j = 0; j < p3; j++)
        {
            for (int k = 0; k < p2; k++)
            {
                for (int l = 0; l < p1; l++)
                {
                    arr[i][j][k][l] = i + j + k + l;
                }
            }
        }
    }

    //* Print value in 4D array.
    for (int i = 0; i < p4; i++)
    {
        for (int j = 0; j < p3; j++)
        {
            for (int k = 0; k < p2; k++)
            {
                for (int l = 0; l < p1; l++)
                {
                    cout << arr[i][j][k][l] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    //* Delete 4D array.
    for (int i = 0; i < p4; i++)
    {
        for (int j = 0; j < p3; j++)
        {
            for (int k = 0; k < p2; k++)
            {
                delete[] arr[i][j][k];
            }
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}