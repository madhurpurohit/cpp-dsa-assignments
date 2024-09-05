#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    if (x < -10000 && y > 100000)
    {
        return;
    }
    x = x + y; // a=a^b;
    y = x - y; // b=a^b;
    x = x - y; // a=a^b;
}

int main()
{
    int a, b;
    cout << "Enter number: ";
    cin >> a >> b;

    swap(a, b);
    cout << a << " " << b << endl;
}