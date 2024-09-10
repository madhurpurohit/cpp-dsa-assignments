//* Print the address of String in c++ using pointer.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    system("clear");
    string name = "Hello";
    string *ptr = &name;

    //* Print the address of string name.
    cout << ptr << endl;

    //* Print the string value.
    cout << *ptr << endl;

    //* Memory size of string name.
    cout << sizeof(name) << endl; //? String memory size is 32 bytes.

    return 0;
}