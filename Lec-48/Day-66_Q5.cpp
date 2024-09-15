//* Whats the output of below code.
#include <iostream>
using namespace std;

void updateValues(int *a, int *b)
{
    *a += *b;
    *b = abs(*a - 2 * (*b));
}

int main()
{
    system("clear");
    int x = 5, y = 3;
    updateValues(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}
