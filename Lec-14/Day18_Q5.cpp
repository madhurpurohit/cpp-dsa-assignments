#include <iostream>
using namespace std;

void Print(int a)
{
    for (int i = 1; i <= a; i++)
    {
        cout<<"Hello Coder Army\n";
    }  
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    Print(num);
}