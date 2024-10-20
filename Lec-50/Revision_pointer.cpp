#include <iostream>
using namespace std;

void swap(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void printArray(int *ptrArr, int size)
{
    for (int i = 0; i < size; i++)
        cout << i + 1 << ". Value of arr [" << i << "] is: " << *(ptrArr + i) << endl;
    cout << endl;
    cout << endl;

    int count = 1;
    while (*ptrArr != '\0')
    {
        cout << count << ". Value of arr [" << count - 1 << "] is: " << *ptrArr << endl;
        ptrArr++;
        count++;
    }
}

void changePtr(int **ptrAddr)
{
    **ptrAddr += 1;
    cout << "Value: " << **ptrAddr << endl;
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

//* A void pointer (also called a generic pointer) is a special type of pointer in C++ that can hold the address of any data type, but it doesn't have a specific type itself. This makes void pointers flexible, as they can point to any type of data (int, float, char, etc.).
//* Typecasting Required: You cannot dereference or perform pointer arithmetic on a void pointer without first converting (typecasting) it to another pointer type, since the compiler doesn’t know what kind of data the pointer is pointing to.
// *((int *)ptr)
//* (int *)ptr : Typecasts ptr to an int *(i.e., tells the compiler to treat the pointer as if it points to an integer).
// *(dereference) : Dereferences the casted pointer(i.e., accesses the value stored at the memory address ptr is pointing to).void voidPtr(void *ptr, char type)

void voidPtr(void *ptr, char type)
{
    if (type == 'i')
        cout << *((int *)ptr) << endl;
    else if (type == 'f')
        cout << *((float *)ptr) << endl;
}

int main()
{
    system("clear");

    //* 1.Basic Pointer Declaration and Initialization.
    // todo Goal: Understand how to declare pointers and use them to access data.
    // int a = 1087;
    // // int *ptr = new int;
    // // ptr = &a;
    // int *ptr = &a;
    // cout << "The address of a using pointer is: " << ptr << endl;
    // cout << "The address of a using dereferencing operator is: " << &a << endl;
    // cout << "The value of a using pointer is: " << *ptr << endl;
    // cout << "The value of a using variable is: " << a << endl;

    //* 2.Pointer Dereferencing.
    // todo Goal: Learn how to dereference pointers to modify values.
    // int a = 10, b = 25;
    // cout << "A before swapping: " << a << endl;
    // cout << "B before swapping: " << b << endl;

    // swap(&a, &b);
    // cout << "A after swapping: " << a << endl;
    // cout << "B after swapping: " << b << endl;

    //* 3.Null Pointers.
    // todo Goal: Learn the importance of checking for nullptr to avoid segmentation faults.
    // int *ptr = nullptr;
    // if (ptr == nullptr)
    //     cout << "This is null pointer.\n";
    // else
    //     cout << "This is not null pointer.\n";

    //* 4.Pointer Arithmetic.
    // todo Goal: Understand how pointer arithmetic works with arrays.
    // int arr[5] = {5, 6, 7, 8, 9};
    // int *ptrArr = arr;
    // // int *ptrArr = (arr + 0);
    // // int *ptrArr = &arr[0];
    // int count = 1;

    // while (*ptrArr != '\0')
    // {
    //     cout << count << ". Value of arr [" << count - 1 << "] is: " << *ptrArr << endl;
    //     ptrArr++;
    //     count++;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << *(ptrArr + i) << " "; // Access array elements using pointer
    // }

    //* 5.Pointers and Arrays.
    // int arr[5] = {5, 6, 7, 8, 9};

    // printArray(arr, 5);

    //* 6.Pointers to Pointers (Double Pointers).
    // todo Goal: Understand how double pointers work.
    //* Visualization:- https://excalidraw.com/#json=bMzxzOysSNW4yGLi84hI-,wxpB9VsQ8mdO4Z3vdoWn9A
    // int a = 10;
    // int *ptr = &a;
    // changePtr(&ptr);

    // cout << "Value: " << a << endl;
    // cout << "Value: " << *ptr << endl;

    //* 7.Dynamic Memory Allocation (new/delete).
    // todo Goal: Learn how to manage memory dynamically.
    // char *ptr = new char[10];
    // cout << "Enter 10 elements: ";
    // for (int i = 0; i < 10; i++)
    //     cin >> *(ptr + i);

    // cout << "The element that you have entered is:\n";
    // for (int i = 0; i < 10; i++)
    //     cout << i + 1 << ". Value of arr[" << i << "] is: " << *(ptr + i) << endl;

    // delete[] ptr;

    //* 8.Pointer to a Function.
    // todo Goal: Learn how to use function pointers in C++.
    // int (*funcPtr)(int, int); // Function Pointer.

    // // Call add() function.
    // funcPtr = add; // Calling add() function.
    // cout << 5 << " + " << 10 << " = " << funcPtr(5, 10) << endl;

    // // Call multiply() function.
    // funcPtr = multiply;
    // cout << 5 << " * " << 10 << " = " << funcPtr(5, 10) << endl;

    //* 9.Const Pointers and Pointer to Const. Or Pointer and Const Qualifiers.
    // todo Goal: Understand constant pointers and pointers to constants.
    // int a = 10, b = 1;
    // const int *ptr = &a;  // Pointer to a constant integer (value can't change, pointer can)
    // int *const ptr1 = &a; // Constant pointer (pointer can't change, value can)

    // // *ptr += 1;
    // cout << "Value a but not incremented: " << *ptr << endl;

    // *ptr1 += 1;
    // cout << "Value a with 1 increment: " << *ptr1 << endl;

    // ptr = &b;
    // cout << "Value b, because address change: " << *ptr << endl;

    // // ptr1 = &b;
    // cout << "Value a, because address cannot change: " << *ptr1 << endl;

    //* 10.Void Pointers
    // todo Goal: Learn how to use void* to store different data types.
    // int a = 5;
    // float b = 5.5;

    // voidPtr(&a, 'i');
    // voidPtr(&b, 'f');

    return 0;
}