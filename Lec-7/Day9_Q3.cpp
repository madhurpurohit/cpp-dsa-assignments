#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row: ";
    cin >> n;

    for (int row = 10; row <= 15; row++)
    {
        for (int col = 10; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << (col + 9) << " ";
        }
        cout << endl;
    }
}