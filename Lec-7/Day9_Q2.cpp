#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            char name = 'A' + (col - 1);
            cout << name << " ";
        }
        cout << endl;
    }
}