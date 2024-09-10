//* Print the address of the first index of the char array in c++.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    system("clear");
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = arr;
    // char *ptr = &arr[0];

    //* Print the address of the first index of array using pointer.
    cout << ptr << endl; //! It will not print the memory address of the first element. Instead, it will treat ptr as if it points to a C-string. It will try to print characters starting from the memory address stored in ptr, until it encounters a null terminator ('\0'). Since arr doesn't contain a null terminator, cout will print the full contents of the array, and may even print garbage values beyond it.

    // todo So we can use "(void*)" for printing address.
    cout << (void *)ptr << endl;

    //* Print the address of the first index of array using & operator.
    cout << arr << endl; //! Same like cout<<ptr<<endl;
    // cout << &arr[0] << endl; //! Same like cout<<ptr<<endl;

    // todo So we can use "(void*)&" for printing address.
    cout << (void *)&arr[0] << endl;

    return 0;
}