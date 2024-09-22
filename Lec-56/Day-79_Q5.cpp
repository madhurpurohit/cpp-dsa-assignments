//* Lower Case to Upper Case in stirng using recursion.
#include <iostream>
#include <string>
using namespace std;

void changeString(string &s, int index)
{
    if (index < 0)
        return;

    if (s[index] >= 'a' && s[index] <= 'z')
    {
        int pos = s[index] - 'a';
        char insert = 'A' + pos;
        s[index] = insert;
    }
    changeString(s, index - 1);
}

int main()
{
    system("clear");
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    changeString(s, s.size() - 1);
    cout << "String after changing: " << s << endl;

    return 0;
}