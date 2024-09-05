#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {-8, 100, -5, 201, -40};
    int smallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest << endl;

    int secondsmallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < secondsmallest && arr[i] > smallest)
        {
            secondsmallest = arr[i];
        }
    }
    cout << secondsmallest << endl;

    int thirdsmallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < thirdsmallest && arr[i] > secondsmallest)
        {
            thirdsmallest = arr[i];
        }
    }
    cout << thirdsmallest << endl;
}