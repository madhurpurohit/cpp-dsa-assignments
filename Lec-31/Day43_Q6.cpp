#include <iostream>
#include <climits>
using namespace std;

int Smallest(int arr[][4], int x, int y)
{
    int smallest = INT_MAX;
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < y; col++)
        {
            smallest = min(smallest, arr[row][col]);
        }
    }
    return smallest;
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    cout << Smallest(arr, 3, 4) << endl;
}
