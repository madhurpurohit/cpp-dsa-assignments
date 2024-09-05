#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool Divide(vector<int> arr)
{
    int totalsum = 0;
    for (int i = 0; i < arr.size(); i++)
        totalsum += arr[i];

    int prefix = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefix += arr[i];
        if (totalsum-prefix == prefix) // if(2*prefix==totalsum)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << Divide(v);
}