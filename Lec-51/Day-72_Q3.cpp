//* Print all odd number from n to 1 using recursion.
#include <iostream>
using namespace std;

void printEven(int num)
{
    if (num == 1)
        return;
    else if (num % 2 == 0)
        cout << num << " ";

    printEven(--num);
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;
    printEven(number);

    return 0;
}