#include <iostream>
using namespace std;

int main()
{
    char arr[7] = {'a', 'f', 'y', 'e', 't', 'u', 'x'};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 1; i > 0; i--)
    {
        char largest = (char)64;
        int index = 0;
        for (int j = 0; j <= i; j++)
        {
            if (largest < arr[j])
            {
                largest = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}