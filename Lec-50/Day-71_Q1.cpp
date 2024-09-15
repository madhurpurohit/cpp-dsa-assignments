//* What will be the output of the program and show us the proper reason behind it.
#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int arr[3][4];

    //* arr is actually a pointer to the first element of the array, which is arr[0]. Specifically, arr points to the first row of the array.The result will be the memory address of the first row of the array.
    cout << "The value inside arr is: " << arr << endl;

    //* arr[0] is a pointer to the first element of the first row, i.e., arr[0][0].The result will be the memory address of arr[0][0](the first element of the first row), which may be the same as the value of arr.
    cout << "The value inside arr[0] is: " << arr[0] << endl;

    //* arr[0][0] is the actual first element of the array. Since the array is uninitialized, the value stored in arr[0][0] is garbage (an undefined value).
    cout << "The value inside arr[0][0] is: " << arr[0][0] << endl;

    return 0;
}