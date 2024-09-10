//* Given an array in c++.
//* int arr[5] = {1, 2, 3, 4, 5};
//* What is the difference between arr and &arr.Try to explore it on your own.

// todo Here we know that arr always stores the address of 0th index. But &arr is a pointer that stores the whole array, not just 1st element of the array.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    system("clear");
    int arr[5] = {1, 2, 3, 4, 5};

    cout << arr << endl;
    cout << &arr << endl; //* They both give same address as the both points 0th index of arr. But arr stores only 0th index of the array, so when we print with (*)dereferencing operator, it will print only 0th index. And &arr stores the whole array, so when we print with (*)dereferencing operator, it will print the whole array.

    cout << sizeof(arr) << endl;  //* Because it is an array which contains 5 integer value & int size is 4 byte that's why it gives 20.
    cout << sizeof(&arr) << endl; //* Because it is a pointer that's why it gives 8 for 64-bit OS.

    return 0;
}