//* Predict the output without running it on compiler, This program simply swap the value till mid of the array.
#include <iostream>
using namespace std;

void reverseString(char *str)
{
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;

    while (str < end)
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++, end--;
    }
}

int main()
{
    system("clear");
    char myString[] = "Programming";
    reverseString(myString);
    cout << myString << endl;
    return 0;
}
