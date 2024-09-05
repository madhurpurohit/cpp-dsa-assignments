#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << cube(num) << endl;
}