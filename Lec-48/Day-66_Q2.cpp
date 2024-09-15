//* Predict the output without running it on compiler.
#include <iostream>
using namespace std;

void modifyString(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

int main()
{
    system("clear");
    char myString[] = "hello World";
    modifyString(myString);
    cout << myString << endl;
    return 0;
}
