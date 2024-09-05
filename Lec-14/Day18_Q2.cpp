#include <iostream>
using namespace std;

int Reverse(int n)
{
    if (n > 5000 || n < -5000)
    {
        return 0;
    }

    int rem, ans = 0;
    while (n)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << Reverse(num) << endl;
}