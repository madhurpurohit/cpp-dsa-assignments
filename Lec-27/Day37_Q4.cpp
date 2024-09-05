#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    vector<int> arr = {0, 1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9, 9, 9, 15, 16};
    cout << "Lower bound element: " << lower_bound(arr.begin(), arr.end(), 4) - arr.begin() << endl;
    cout << "Upper bound element: " << upper_bound(arr.begin(), arr.end(), 4) - arr.begin() << endl;
}