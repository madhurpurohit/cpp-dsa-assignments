#include <iostream>
using namespace std;

void Swap(int &a, int &b, int &c)
{
    int temp=a;
    a=b;
    b=c;
    c=temp;
}

int main()
{
    int a, b, c;
    cout << "Enter number: ";
    cin >> a >> b >> c;

    Swap(a, b, c);
    cout << a << " " << b << " " << c << endl;
}