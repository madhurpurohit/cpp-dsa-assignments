// Program that print all subarray of an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 3, 7, 2};
    cout << endl;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " size subarray of array is: ";
        for (int j = 0; j < n - i; j++)
        {
            cout << "[";
            for (int k = j; k <= j+i; k++)
                cout << arr[k] << " ";
            cout << "]"
                 << " ";
        }
        cout << endl;
    }
}