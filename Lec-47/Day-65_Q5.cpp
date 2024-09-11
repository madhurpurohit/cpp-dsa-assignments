//* Write a function to check if a C - style string is a palindrome.
// todo strlen is a function in C++ that calculates the length of a null-terminated string.

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str)
{
    // Check for palindrome
    int first = 0, second = strlen(str) - 1;
    while (first <= second)
    {
        if (str[first] != str[second])
            return false;
        first++;
        second--;
    }
    return true;
}

int main()
{
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";
    cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") << endl;
    cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") << endl;
    return 0;
}
