//* Print numbers from n to 1 using recursion.
#include <iostream>
using namespace std;

void Print(int num)
{
    if (num == 0)
    {
        return;
    }
    cout << num << " ";
    Print(--num);
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;
    Print(number);

    return 0;
}