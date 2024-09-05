#include <iostream>
#include <climits>
using namespace std;

int Largest(int arr[][4], int x, int y)
{
    int largest = INT_MIN;
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < y; col++)
        {
            largest = max(largest, arr[row][col]);
        }
    }
    return largest;
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    cout << Largest(arr, 3, 4) << endl;
}