//* What is static_cast in c++.
// todo It is originated from C++ & it is more readable, safer & more explicit.Because it is used to perform conversion that the compiler can check at compile time. In modern C++ code, always prefer static_cast<void*>because it provides better type safety, readability & clarity.

//? Syntax: static_cast<void*>(variable-name)

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = arr;
    // char *ptr = &arr[0];

    //* It will print the whole array until it encounters a null terminator, in array it will automatically insert '\0' at the end, but it will not insert '\0' at the end of the character variable.
    cout << "Character Array: " << endl;
    cout << ptr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << static_cast<void *>(&arr[0]) << endl;
    cout << static_cast<void *>(ptr) << endl;
    cout << static_cast<void *>(&arr) << endl;
    cout << endl;
    cout << endl;

    char name = 'f';
    char *cptr = &name;

    cout << "Character Variable: " << endl;
    cout << ptr << endl;
    cout << &name << endl;
    cout << static_cast<void *>(ptr) << endl;
    cout << static_cast<void *>(&name) << endl;

    return 0;
}