//* Print 1 to N even numbers using recursion.
#include <iostream>
using namespace std;

void printEven1(int num, int N)
{
    if (num > N)
    {
        cout << endl;
        return;
    }
    cout << num << " ";
    printEven1(num + 2, N);
}
void printEven2(int N)
{
    if (N == 2)
    {
        cout << 2 << " ";
        return;
    }
    printEven2(N - 2);
    cout << N << " ";
}

int main()
{
    system("clear");
    int N;
    cout << "Enter number: ";
    cin >> N;
    if (N % 2 == 1)
        N--;

    cout << "Print 1 to " << N << " even number using two parameters: " << endl;
    printEven1(2, N);

    cout << "Print 1 to " << N << " even number using single parameters: " << endl;
    printEven2(N);
    cout << endl;

    return 0;
}