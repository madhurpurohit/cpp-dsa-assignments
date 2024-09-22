//* Write a Table program using recursion. Take input number n, and print its table.
#include <iostream>
using namespace std;

void printTable(int start, int num)
{
    if (start == 10)
    {
        cout << num << " x " << start << " = " << num * start << endl;
        return;
    }
    cout << num << " x " << start << " = " << num * start << endl;
    printTable(++start, num);
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;

    printTable(1, number);

    return 0;
}