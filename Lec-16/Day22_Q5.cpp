#include <iostream>
#include <cstdlib>
#include <climits> //For INT_MIN & INT_MAX in-built function.
using namespace std;
#define size 1000

int main()
{
    system("clear");
    // Method-1 for second largest number.
    int arr[5] = {-8, 100, -5, 201, -40};
    int largest = INT_MIN;
    for (int i = 2; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int second_largest;
    second_largest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
    cout << second_largest << endl;

    // Method-2 for second and third largest number.
    int array[size];
    int range;
    cout << "Enter the size of array: ";
    cin >> range;

    for (int i = 0; i < range; i++)
    {
        cin >> array[i];
    }
    int last = array[0], previous = INT_MIN, s_previous = INT_MIN;

    for (int i = 0; i < range; i++)
    {
        if (array[i] > last)
        {
            s_previous = previous;
            previous = last;
            last = array[i];
        }
        else if (array[i] > previous && array[i] != last)
        {
            s_previous = previous;
            previous = array[i];
        }
        else if (array[i] > s_previous && array[i] != last && array[i] != previous)
            s_previous = array[i];
    }
    cout << "The maximum number is: " << last << endl;
    cout << "The second maximum number is: " << previous << endl;
    cout << "The third maximum number is: " << s_previous << endl;
}