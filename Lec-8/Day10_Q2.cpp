#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        char name = 'A' + row - 1;
        for (int col = 1; col <= (n - row); col++)
        {
            cout << "  ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << name << " ";
        }
        cout << endl;
    }
}