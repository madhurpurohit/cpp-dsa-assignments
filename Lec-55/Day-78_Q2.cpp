//* Find the Product of all elements in a given array of size N.
#include <iostream>
using namespace std;

//? Array from index 0 to last index.
long long productArray(long long arr[], long long index, long long size)
{
    if (index == size - 1)
        return arr[index];

    return arr[index] * productArray(arr, index + 1, size);
}

//? Array from last index to 0.
long long productArrayLast(long long arr[], long long index)
{
    if (index == 0)
        return arr[index];

    return arr[index] * productArrayLast(arr, index - 1);
}

int main()
{
    system("clear");
    long long arr[5] = {7, 2, 4, 1, 6};

    cout << "Product of element of array from 0 index to last index is: " << productArray(arr, 0, 5) << endl;

    cout << "Product of element of array from last index to 0 index is: " << productArrayLast(arr, 4) << endl;

    return 0;
}