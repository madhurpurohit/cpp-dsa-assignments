//* Given a String, count the number of consonants in it.
#include <iostream>
#include <string>
using namespace std;

int countConsonant(string s, int index)
{
    if (index < 0)
        return 0;

    if (s[index] != 'a' && s[index] != 'e' && s[index] != 'i' && s[index] != 'o' && s[index] != 'u')
        return 1 + countConsonant(s, index - 1);

    return countConsonant(s, index - 1);
}

int main()
{
    system("clear");
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Total consonant in string is: " << countConsonant(s, s.size() - 1) << endl;

    return 0;
}