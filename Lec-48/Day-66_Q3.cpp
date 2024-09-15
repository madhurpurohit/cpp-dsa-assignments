//* Predict the output.
#include <iostream>
using namespace std;

void concatenateAndPrint(char *str1, const char *str2)
{
    while (*str1) // This will go to str1[4], where it gets "\0".
    {
        str1++;
    }

    while ((*str1 = *str2)) // Here str1 will start from str[4] and it goes until it gets "\0" in str2.
    {
        str1++, str2++;
    }
}

int main()
{
    system("clear");
    char first[] = "Good";
    const char second[] = "Morning";
    concatenateAndPrint(first, second);
    cout << first << endl;
    return 0;
}
