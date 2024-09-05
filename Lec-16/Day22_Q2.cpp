#include <iostream>
using namespace std;

int main()
{
    int a[18];
    for (int i = 0; i < 18; i++)
    {
        cin >> a[i];
    }
    int ans = 0, avg;
    for (int i = 0; i < 18; i++)
    {
        ans += a[i];
    }
    avg = ans / 18;
    cout << avg << endl;
}