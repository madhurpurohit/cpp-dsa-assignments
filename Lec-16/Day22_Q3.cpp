#include <iostream>
using namespace std;

int main()
{
    int a[5] = {15, 45, 78, 31, 56};
    int ans;
    cout << "Enter the element: ";
    cin >> ans;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == ans)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}