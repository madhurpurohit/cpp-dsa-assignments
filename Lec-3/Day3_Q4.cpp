#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (65 < age < 12)
    {
        cout << "Yes! you are eligible for a discounted ticket price";
    }
    else
    {
        cout << "No! you are not eligible for a discounted ticket price";
    }
}