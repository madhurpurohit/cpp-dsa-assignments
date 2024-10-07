//* Find the Winner of the Circular Game.
//* Problem Link:- https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
// todo Visualization link:- https://excalidraw.com/#json=FGic5zkU5vvp1WLb6Gjt0,w1LHaH_kQCb6K2innefH3Q
#include <iostream>
#include <vector>
using namespace std;

//* Here Time Complexity is O(N^2) & Space Complexity is O(N).
int predictWinner(vector<bool> &person, int size, int index, int personLeft, int k)
{
    if (personLeft == 1)
    {
        for (int i = 0; i < person.size(); i++)
        {
            if (person[i] == 0)
                return i;
        }
    }

    //? Find the person of kill person.
    int kill = (k - 1) % person.size();
    while (kill--)
    {
        index = (index + 1) % size;
        while (person[index] == 1)
            index = (index + 1) % size;
    }
    person[index] = 1;

    //? If current person is eliminated so we skipped.
    while (person[index] == 1)
        index = (index + 1) % size;

    return predictWinner(person, size, index, personLeft - 1, k);
}

//* With Time Complexity O(N) & Space Complexity O(N) but without any extra memory.
int winner(int n, int k)
{
    if (n == 1)
        return 0;

    return (winner(n - 1, k) + k) % n;
}

int main()
{
    // system("clear");
    vector<int> arr = {1, 2, 3, 4, 5};
    int eliminate;
    cout << "Enter the eliminate count: ";
    cin >> eliminate;

    vector<bool> isEliminated(arr.size(), 0);
    int personLeft = arr.size() - 1;
    int n = arr.size();

    cout << "The winner is:" << predictWinner(isEliminated, n, 0, personLeft, eliminate) + 1 << endl;
    cout << endl;

    cout << "The winner is:" << winner(n, eliminate) + 1 << endl;

    return 0;
}