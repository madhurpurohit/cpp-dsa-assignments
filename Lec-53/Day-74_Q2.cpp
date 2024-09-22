//* Given a Number N, check whether it is prime or not using Recursion.
#include <iostream>
using namespace std;

bool checkPrime(int start, int num)
{
    if (start == num)
        return true;
    if (num % start == 0)
        return false;

    return checkPrime(start + 1, num);
}

int main()
{
    system("clear");
    int number;
    cout << "Enter number: ";
    cin >> number;

    //? Edge case: prime numbers are greater than 1
    if (number <= 1)
    {
        cout << "Prime numbers are greater than 1." << endl;
        return 0;
    }

    //? Call the checkPrime function and print the result
    bool isPrime = checkPrime(2, number);
    cout << "Given number " << number << " isPrime: " << (isPrime ? "Yes" : "No") << endl;

    return 0;
}