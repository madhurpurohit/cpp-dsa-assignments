// Convert binary to decimal number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter binary number: ";
    cin >> num;
    int ans = 0, rem, mul = 1;

    for (int i = num; i > 0; i /= 10)
    {
        rem = i % 10;
        ans += rem * mul;
        mul *= 2;
    }
    cout << ans << endl;
}