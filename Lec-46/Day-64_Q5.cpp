//* int arr[5] = {1,2,3,4,5};
//* Create a pointer which will store the address of the last element.Then print all the elements from the last index to 0th index with the help of a pointer.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    system("clear");
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];

    //* Print all the elements by initializing last element as an pointer.
    for (int i = 0; i < 5; i++)
        cout << *(ptr - i) << " ";
    cout << endl;

    //* Print all the element by initializing first element as an pointer.
    ptr = arr;
    for (int i = 4; i >= 0; i--)
        cout << *(ptr + i) << " ";
    cout << endl;

    return 0;
}