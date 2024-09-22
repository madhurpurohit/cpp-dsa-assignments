//* Print 1 to N using recursion.
#include <iostream>
using namespace std;

//* Print 1 to N using recursion with two parameters.
void print1ToNdpara(int num, int number)
{
    if (num == number)
    {
        cout << num << endl;
        return;
    }
    cout << num << " ";
    print1ToNdpara(num + 1, number);
}

//* Print 1 to N using recursion with one parameter.
void print1ToNspara(int number)
{
    if (number == 1)
    {
        cout << number << " ";
        return;
    }
    print1ToNspara(number - 1);
    cout << number << " ";
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Print 1 to " << number << " using two parameters: " << endl;
    print1ToNdpara(1, number);

    cout << "Print 1 to " << number << " using one parameters: " << endl;
    print1ToNspara(number);
    cout << endl;

    return 0;
}