//* What is void*, and what is its use case in C++?

//? It is originated from C Language & it is safe, less readable. Because it doesn't check if the conversion is valid or not at compile time.It doesn't distinguish between different type of casting (Static, Dynamic, Reinterpret).

//? Use Case of void*:
// It is often used to print any pointer address or it is often used for character array and you want to print the address of the character array, Than use (void*)variable-name to print the address.

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
    cout << (void *)ptr << endl;
    cout << (void *)&arr << endl;
    cout << (void *)&arr[0] << endl;
    cout << endl;
    cout << endl;

    char name = 'f';
    char *cptr = &name;

    cout << "Character Variable: " << endl;
    cout << ptr << endl;
    cout << &name << endl;
    cout << (void *)ptr << endl;
    cout << (void *)&name << endl;

    return 0;
}