//* Sum of squares using recursion.
#include <iostream>
using namespace std;

int sumSquare(int n)
{
    if (n == 1)
        return 1;

    return n * n + sumSquare(n - 1);
}

int main()
{
    system("clear");
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Sum of squares from 1 to " << num << " is: " << sumSquare(num) << endl;

    return 0;
}