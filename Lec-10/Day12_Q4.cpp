#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three number: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b || a > c)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    (a > b) ? ((a > c) ? cout << "Yes" << endl : cout << "No" << endl) : cout << "No";
}