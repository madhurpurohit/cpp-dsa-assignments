#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter the temprature in celsius: ";
    cin >> temp;

    temp=(temp-32)*5/9;
    if (temp >= 70 && temp < 90)
        cout << "Yes" << endl;

    else
        cout << "No!" << endl;

}