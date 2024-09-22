//* Problem:- Climbing Stairs
//* Statement:- You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps.In how many distinct ways can you climb to the top ?
#include <iostream>
using namespace std;

int climbStairsRec(int n)
{
    if (n <= 1)
        return 1;

    return climbStairsRec(n - 1) + climbStairsRec(n - 2);
}

int climbStairsLoop(int n)
{
    int secondPrevious = 1, previous = 1, current = previous;
    for (int i = 2; i <= n; i++)
    {
        current = secondPrevious + previous;
        secondPrevious = previous;
        previous = current;
    }
    return current;
}

int main()
{
    system("clear");
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Total methods to climb " << num << " stairs is: " << climbStairsRec(num) << endl;
    cout << "Total methods to climb " << num << " stairs is: " << climbStairsLoop(num) << endl;

    return 0;
}