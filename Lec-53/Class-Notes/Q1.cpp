//* Print factorial using recursion.
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    system("clear");
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial of " << num << " is not possible.\n";
        return 0;
    }

    cout << "Factorial of " << num << " is: " << fact(num) << endl;

    return 0;
}