//* Check palindrome using recursion in string.
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;

    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    system("clear");
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Given string isPalindrome: " << isPalindrome(s, 0, s.size() - 1) << endl;

    return 0;
}