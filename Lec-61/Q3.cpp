//* Generate Parentheses using recursion.
//* Time complexity:- O(2^N), Space Complexity:- O(4^N / sqrt(N)).
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void parentheses(int n, int left, int right, vector<string> &ans, string &temp)
{
    if (left + right == 2 * n)
    {
        ans.push_back(temp);
        return;
    }

    // Left parentheses.
    if (left < n)
    {
        temp.push_back('(');
        parentheses(n, left + 1, right, ans, temp);
        temp.pop_back();
    }

    // Right parentheses.
    if (right < left)
    {
        temp.push_back(')');
        parentheses(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

int main()
{
    system("clear");
    vector<string> ans;
    string temp;
    int n;
    cout << "Enter number of parentheses: ";
    cin >> n;

    parentheses(n, 0, 0, ans, temp);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}