//* Print all numbers from 1 to n using recursion.
#include <iostream>
using namespace std;

void printOdd(int num)
{
    if (num == 0)
        return;
    else if (num % 2 != 0)
        cout << num << " ";

    printOdd(--num);
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;
    printOdd(number);

    return 0;
}