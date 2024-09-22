//* Print all odd numbers from 1 to n using recursion.
#include <iostream>
using namespace std;

void printOdd(int first, int last)
{
    if (first == last)
    {
        cout << first << endl;
        return;
    }
    cout << first << " ";
    printOdd(++first, last);
}

void printOdd2(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    printOdd2(n - 1);
    cout << n << " ";
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;

    printOdd(1, number);
    printOdd2(number);

    return 0;
}