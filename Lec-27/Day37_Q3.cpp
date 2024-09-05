#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    cout << "Max element: " << *max_element(arr.begin(), arr.end()) << endl;
    cout << "Min element: " << *min_element(arr.begin(), arr.end()) << endl;
}