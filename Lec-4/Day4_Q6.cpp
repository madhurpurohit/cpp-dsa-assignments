#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Odd numbers from 1 to " << number << "is: ";
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "  ";
        }
    }
}