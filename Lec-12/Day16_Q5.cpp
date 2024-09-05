// Convert binary to octal number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter binary number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    for (int i = num; i > 0; i /= 10)
    {
        rem = i % 10;
        ans += rem * mul;
        mul *= 2;
    }

    num = ans, ans = 0, mul = 1;
    while (num)
    {
        rem = num % 8;
        ans += rem * mul;
        num /= 8;
        mul *= 10;
    }
    cout << ans << endl;
}