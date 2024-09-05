#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Number that is divisible by 4 from 1 to " << number << endl;
    for (int i = 4; i <= number; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
    }
}