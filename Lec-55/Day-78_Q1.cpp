//* Find the Maximum element in a given array of size N.
#include <iostream>
using namespace std;

int maximumElement(int arr[], int index, int size)
{
    if (index == size - 1)
        return arr[index];

    return max(arr[index], maximumElement(arr, index + 1, size));
}

int main()
{
    system("clear");
    int arr[5] = {7, 2, 4, 1, 6};

    cout << "Maximum element in array is: " << maximumElement(arr, 0, 5) << endl;

    return 0;
}