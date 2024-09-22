//* Power of 2 using recursion.
#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 1)
        return 2;

    return 2 * power(n - 1);
}

int power2(int b, int e)
{
    if (e == 1)
        return b;

    return b * power2(b, e - 1);
}

int main()
{
    system("clear");
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "2 ^ " << num << " = " << power(num) << endl;

    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << base << " ^ " << exponent << " = " << power2(base, exponent) << endl;

    return 0;
}