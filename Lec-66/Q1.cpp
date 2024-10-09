//* Tower Of Hanoi Problem.
//*  Links:- https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// todo Visualization & dry run:- https://excalidraw.com/#json=ka61FF3mz7LqrHIWobU6z,6hteWn5xaFW5fLvqv3YX6Q
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void towerOfHanoi(int N, int source, int helper, int destination)
{
    if (N == 1)
    {
        cout << "move disk " << N << " from rod " << source << " to rod " << destination << endl;
        return;
    }

    towerOfHanoi(N - 1, source, destination, helper);
    cout << "move disk " << N << " from rod " << source << " to rod " << destination << endl;

    towerOfHanoi(N - 1, helper, source, destination);
}

int main()
{
    system("clear");
    int n;
    cout << "Enter number of rods: ";
    cin >> n;

    towerOfHanoi(n, 1, 2, 3);

    cout << "Total step to move all rods from source(1) to destination(3) is:" << pow(2, n) - 1 << endl;

    return 0;
}