//* Sum of N number using recursion.
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main()
{
    system("clear");
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Sum of 1 to " << num << " is: " << sum(num) << endl;

    return 0;
}