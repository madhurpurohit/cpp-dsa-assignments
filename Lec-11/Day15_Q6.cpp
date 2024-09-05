#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    int i = 2;

    int temp;
    while (i <= num / 2)
    {
        temp = 0;
        if (num % i == 0)
        {
            cout << "The given number is not prime." << endl;
            temp = 1;
            break;
        }
        i++;
    }
    if (temp == 0)
    {
        cout << "The given number is prime." << endl;
    }
}