//* What is the difference between below 2 lines
//* const char *str = "Hello, World!";
//* char *str = "Hello, World!";

//* const char *str = "Hello, World!";. Here, str is a non - constant pointer to a constant character.This means that the pointer str can be changed to point to a different location in memory, but the characters it points to cannot be modified.

//* char *str = "Hello, World!";. Here, str is a non - constant pointer to non - constant characters.This means that both the pointer str and the characters it points to can be modified.

//! Key Difference:-
//*In the first case, attempting to modify the characters pointed to by str will result in a compiler error. The string data is immutable (constant), but the pointer str itself can point to different constant strings (you can make str point to another string later).
//* In the second case, modifying the characters pointed to by str is allowed, but it's generally not a good idea, as string literals are often stored in read-only memory. This is less safe than using const char * because it falsely implies that you can modify the string when you actually cannot.

//? if you want to ensure that the characters pointed to by a pointer are not modified, use the const keyword. If you need to modify the characters, use a non-constant pointer, but be aware of the potential risks.

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    // system("clear");
    const char *str = "Hello, World!";
    char *str1 = "Hello, World!";

    cout << str << endl;
    cout << str1 << endl;

    cout << *str << endl;
    cout << *str1 << endl;

    cout << (void *)str << endl;
    // cout << static_cast<void *>(str) << endl; //It will invalid.
    cout << (void *)str1 << endl;
    // cout << static_cast<void *>(str) << endl; //It will invalid.

    str = "Hello, Coder Army!";
    str1 = "Hello, Everyone!";
    cout << str << endl;
    cout << str1 << endl;

    cout << (void *)str << endl;
    cout << (void *)str1 << endl;

    return 0;
}