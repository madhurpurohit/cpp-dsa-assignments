#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < 20; i++)
        ans += arr[i];
    cout << ans << endl;
}