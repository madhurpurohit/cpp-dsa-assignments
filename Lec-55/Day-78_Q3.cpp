//* Find the Number of even elements in a given array of size N.
#include <iostream>
using namespace std;

int evenElement(int arr[], int index, int size, int count)
{
    if (index == size)
        return count;

    if (arr[index] % 2 == 0)
        count++;

    return evenElement(arr, index + 1, size, count);
}

int main()
{
    system("clear");
    int arr[5] = {7, 2, 4, 1, 6};
    int count = 0;

    cout << "Total number of even element in array is: " << evenElement(arr, 0, 5, count) << endl;

    return 0;
}