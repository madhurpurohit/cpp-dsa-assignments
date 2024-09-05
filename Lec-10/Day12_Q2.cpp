#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num >= 0 && num % 2 == 0)
    {
        cout << "Yes";
    }
    else
        cout << "No";
}