//* Predict Output without running it on Compiler
#include <iostream>
using namespace std;

void countVowelsAndConsonants(const char *str, int &vowels, int &consonants)
{
    vowels = consonants = 0;

    while (*str)
    {
        char ch = tolower(*str);
        if (isalpha(ch)) // It is in-built function which return 1 if the ch is alphabets and return 0 if the ch is any symbols($,#,@ etc.)or numbers or space.
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        str++;
    }
}

int main()
{
    system("clear");
    const char *text = "Hello, World!";
    int numVowels, numConsonants;
    countVowelsAndConsonants(text, numVowels, numConsonants);
    cout << "Vowels: " << numVowels << ", Consonants: " << numConsonants << endl;
    return 0;
}
