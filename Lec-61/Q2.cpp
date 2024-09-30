#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subset(string &s, int index, int size, vector<string> &ans, string &temp)
{
    if (index == size)
    {
        ans.push_back(temp);
        return;
    }

    subset(s, index + 1, size, ans, temp);

    temp.push_back(s[index]);
    subset(s, index + 1, size, ans, temp);
    temp.pop_back();
}

int main()
{
    system("clear");
    string s = "abcd";

    vector<string> ans;
    string temp;

    subset(s, 0, s.size(), ans, temp);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}