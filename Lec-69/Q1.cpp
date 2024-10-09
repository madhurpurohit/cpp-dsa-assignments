//* Print N-bit binary number having more 1s than 0s for any prefix of the number.
//* Link:- https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void findNBitBinary(int n, vector<string> &ans, string &temp, int zero, int one)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    if (zero < one)
    {
        temp.push_back('0');
        findNBitBinary(n, ans, temp, zero + 1, one);
        temp.pop_back();
    }

    temp.push_back('1');
    findNBitBinary(n, ans, temp, zero, one + 1);
    temp.pop_back();
}

int main()
{
    system("clear");
    int n;
    cout << "Enter number(1-15): ";
    cin >> n;

    vector<string> ans;
    string temp;

    findNBitBinary(n, ans, temp, 0, 0);
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}