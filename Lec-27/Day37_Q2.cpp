#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    vector<int> arr = {0, 0, 1, 1, 2, 2, 3, 3, 3, 4};
    cout << "Total occurrence: " << count(arr.begin(), arr.end(), 4) << endl;
}