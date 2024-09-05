//* How to store a number and it's repeat value in one position. Where 1<=N<=99.

// #include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

void store_number(vector<int> arr)
{
    // Find the number occurrence.
    int num = arr[0];
    int count_Occur = count(arr.begin(), arr.end(), num);
    cout << "Count Occurrence is: " << count_Occur << endl;
    int store;
    store = count_Occur * 100 + num;

    cout << "The number " << store % 100 << " & it's occurrence is: " << store / 100 << endl;
}

int main()
{
    system("clear");
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    vector<int> arr(size, 0);

    cout << "Enter element in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    store_number(arr);
}