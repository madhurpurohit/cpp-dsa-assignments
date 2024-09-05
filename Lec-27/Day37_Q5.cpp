#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

void print(vector<int> arr)
{
    arr[5] = 10;
    cout << "Element in vector is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print1(vector<int> &arr)
{
    arr[5] = 10;
    cout << "Element in vector is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    system("clear");
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    print(arr);
    cout << "Element in vector is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    print1(arr);
    cout << "Element in vector is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}