// Convert octal to decimal number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter octal number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    for (int i = num; i > 0; i /= 10)
    {
        rem = i % 10;
        ans += rem * mul;
        mul *= 8;
    }
    cout << ans << endl;
}