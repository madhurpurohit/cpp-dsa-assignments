// Convert decimal to octal number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    int ans = 0, mul = 1, rem;

    while (num)
    {
        rem = num % 8;
        ans += rem * mul;
        num /= 8;
        mul *= 10;
    }
    cout << ans << endl;
}