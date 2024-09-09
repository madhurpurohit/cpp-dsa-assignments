//* Problem1:- Given a string which is in circular form find second string which is in circular form.
//* Problem2:- Given a string in which we have to find second string you can also rotate it or make it in circular form.
//* Solution:- Here we simply copy the string and add it to itself. After that we compare the two strings, using KMP Algorithm.
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void findLps(vector<int> &lps, string pat)
{
    int pre = 0, suf = 1;
    while (suf < pat.size())
    {
        if (pat[pre] == pat[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }
}

int main()
{
    system("clear");
    string txt = "cdeabroab";
    string pat = "bcdeab";

    string new_txt = txt + txt;
    vector<int> lps(pat.size(), 0);
    findLps(lps, pat);

    int first = 0, second = 0, n = new_txt.size();
    while (first < n)
    {
        if (new_txt[first] == txt[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }

        if (second == pat.size())
        {
            cout << "Got it." << endl;
            return 0;
        }
    }
    cout << "Not Found." << endl;
    return 0;
}