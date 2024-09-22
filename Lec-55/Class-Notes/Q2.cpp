//* Minimum element in array using recursion.
#include <iostream>
using namespace std;

//? Basic approach.
int minimumElement(int arr[], int index, int size, int minimum)
{
    if (index == size)
        return minimum;

    if (arr[index] < minimum)
        minimum = arr[index];

    return minimumElement(arr, index + 1, size, minimum);
}

//? Logical approach.
int minimumElement1(int arr[], int index, int size)
{
    if (index == size - 1)
        return arr[index];

    return min(arr[index], minimumElement1(arr, index + 1, size));
}

int main()
{
    system("clear");
    int arr[5] = {7, 2, 4, 1, 6};
    int minimum = arr[0];

    cout << "Minimum element with basic approach in array is: " << minimumElement(arr, 0, 5, minimum) << endl;

    cout << "Minimum element with logical approach in array is: " << minimumElement1(arr, 0, 5) << endl;

    return 0;
}