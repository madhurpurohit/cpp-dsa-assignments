//*  Sum of cubes of N natural numbers using Recursion.

#include <iostream>
using namespace std;

long long printSumOfCubes(long long num)
{
    if (num == 1)
        return 1;

    return (num * num) * num + printSumOfCubes(num - 1);
}

int main()
{
    system("clear");
    long long number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Sum of cubes from 1 to " << number << " is: " << printSumOfCubes(number);

    return 0;
}