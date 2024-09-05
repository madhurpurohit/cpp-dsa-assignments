#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    int i = 1;

    while (i <= num)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    int n = 1;
    do
    {
        cout << n << " ";
        n++;
    } while (n <= num);
}