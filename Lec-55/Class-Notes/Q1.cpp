//* Sum of all element in array using recursion.
#include <iostream>
using namespace std;

//? From  last index to 0.
int reverseSumElements(int arr[], int index)
{
    if (index == 0)
        return arr[index];

    return arr[index] + reverseSumElements(arr, index - 1);
}

//? From index 0 to last index.
int sumElements(int arr[], int index, int size)
{
    if (index == size)
        return 0;

    return arr[index] + sumElements(arr, index + 1, size);
}

int main()
{
    system("clear");
    int arr[5] = {3, 4, 5, 8, 2};

    cout << "Sum of all element in reverse array is: " << reverseSumElements(arr, 4) << endl;

    cout << "Sum of all element in array is: " << sumElements(arr, 0, 5) << endl;

    return 0;
}