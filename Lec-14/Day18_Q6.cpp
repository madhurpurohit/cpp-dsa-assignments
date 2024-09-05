#include <iostream>
using namespace std;

int Combination(int a, int b)
{
    if (a > 12 || b > 12)
        return 0;

    int fact_n = 1, fact_r = 1, fact_nr = 1;
    for (int i = 1; i <= a; i++)
        fact_n *= i;

    for (int i = 1; i <= b; i++)
        fact_r *= i;

    for (int i = 1; i <= a - b; i++)
        fact_nr *= i;

    int com;
    com = (fact_n / (fact_r * fact_nr));

    return com;
}

int main()
{
    int t_n, c_n;
    cout << "Enter total number of things: ";
    cin >> t_n;
    cout << "Enter total choosen things out of total number: ";
    cin >> c_n;

    cout << Combination(t_n, c_n) << endl;
}