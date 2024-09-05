#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        sum = sum + (i * i);
    }
    cout << "The sum of square of first " << num << " number is: " << sum;
}