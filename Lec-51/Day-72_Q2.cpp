//* Print "Hello, Programmers” 10 times using recursion.
#include <iostream>
using namespace std;

void Print(int n = 10)
{
    if (n == 0)
    {
        return;
    }
    cout << "Hello, Programmers\n";
    Print(--n);
}

int main()
{
    system("clear");
    Print();

    return 0;
}