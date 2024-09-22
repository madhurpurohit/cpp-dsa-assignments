//* Count vowel in string suing recursion.
#include <iostream>
#include <string>
using namespace std;

//? Basic approach.
int vowelCount(string s, int start, int count)
{
    //? Base Condition.
    if (start == s.size())
        return count;

    if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u')
        count++;

    return vowelCount(s, start + 1, count);
}

//? Better approach.
int vowelCount1(string s, int start)
{
    if (start < 0)
        return 0;

    if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u')
        return 1 + vowelCount1(s, start - 1);

    else
        return vowelCount1(s, start - 1);
}

int main()
{
    system("clear");
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Total vowels present in string with basic approach is: " << vowelCount(s, 0, 0) << endl;

    cout << "Total vowels present in string with better approach is: " << vowelCount(s, 0, 0) << endl;

    return 0;
}