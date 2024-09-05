#include <iostream>
using namespace std;

int main()
{
    char name[26], alpha = 'a';
    for (int i = 0; i < 26; i++)
    {
        name[i] = alpha;
        alpha++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << name[i] << " ";
    }
}