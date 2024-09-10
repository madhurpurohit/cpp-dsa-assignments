//* Print the address of the char variable in c++.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    system("clear");
    char name = 'a';
    char *ptr = &name;

    //* Print the address of name variable. Here also for printing address of name variable we can use "(void*)" after that pointer name.
    cout << (void *)ptr << endl;

    //* Print the value of name variable.
    cout << *ptr << endl;

    return 0;
}