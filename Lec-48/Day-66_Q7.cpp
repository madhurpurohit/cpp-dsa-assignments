//* Predict the output.
#include <iostream>
using namespace std;

void foo(int *i, int *j)
{
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;
}

int main()
{
    system("clear");
    int a = 4, b = 5;
    foo(&a, &b);
    cout << a << " " << b << endl;
}
