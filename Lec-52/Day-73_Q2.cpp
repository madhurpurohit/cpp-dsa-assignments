//* Print all numbers from 10 to n using recursion, where n will be greater than 10.
#include <iostream>
using namespace std;

void printNum(int start, int num)
{
    if (start == num)
    {
        cout << start << endl;
        return;
    }
    cout << start << " ";
    printNum(++start, num);
}

void printNum2(int num)
{
    if (num == 10)
    {
        cout << num << " ";
        return;
    }
    printNum2(num - 1);
    cout << num << " ";
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number >= 10)
    {
        printNum(10, number);
        printNum2(number);
        cout << endl;
    }
    else
        cout << "Number must be greater 10." << endl;

    return 0;
}