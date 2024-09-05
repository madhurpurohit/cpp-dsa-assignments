#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    int i = 1, fact = 1;

    while (i <= num)
    {
        fact *= i;
        i++;
    }
    cout << fact << endl;

    fact = 1, i = 1;
    do
    {
        fact *= i;
        i++;
    } while (i <= num);
    cout << fact << endl;
}