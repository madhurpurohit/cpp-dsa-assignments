//* Reverse a string using recursion.
#include <iostream>
#include <string>
using namespace std;

//? Approach-1.
string reverseString(string &s, string ans, int start)
{
    if (start < 0)
        return ans;
    ans += s[start];
    return reverseString(s, ans, start - 1);
}

//? Approach-2.
void reverseString1(string &s, int start, int end)
{
    if (start >= end)
        return;

    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    reverseString1(s, start + 1, end - 1);
}

int main()
{
    system("clear");
    string s, sCopy, ans = "";
    cout << "Enter string: ";
    getline(cin, s);
    sCopy = s;

    cout << "Reverse of string \"" << s << "\" is: " << endl;

    cout << reverseString(s, ans, s.size() - 1) << endl;

    reverseString1(sCopy, 0, s.size() - 1);
    cout << sCopy << endl;

    return 0;
}