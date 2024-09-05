#include <iostream>
using namespace std;

int main()
{
    int last = 0, prev = 1, curr, n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The fibonnaci series from 0 to " << n << " is: 0 1 ";
    for (int i = 2; i < n; i++)
    {
        curr = last + prev;
        last = prev;
        prev = curr;
        cout << curr << " ";
    }
    cout << endl;
    cout << "The " << n << " number of fibonnaci series is: " << curr;
}