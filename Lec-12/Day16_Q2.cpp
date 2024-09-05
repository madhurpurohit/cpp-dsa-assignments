// Convert decimal to binary number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter desimal number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    for (int i = num; i > 0; i /= 2)
    {
        rem = i % 2;
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans << endl;
}