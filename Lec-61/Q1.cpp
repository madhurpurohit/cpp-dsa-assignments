//* Find all subsequences of array using recursion. Here Time Complexity is O(2^N) & Space Complexity is O(2^N * N).
//* Visualization Links:- https://excalidraw.com/#json=Y1WY6TDztDkOEB4eKK3N_,Ws9oZsiFSA0uerv5h3lXWA
#include <iostream>
#include <vector>
using namespace std;

// todo if we pass temp as an value so our space complexity will increase slightly. So Space Complexity is O(2^N * N [Because Ans]+ N^2 [Because Temp]), so SC is O(2^N * N). & Auxilary Space Complexity is O(N^2).
// void subSequence(int arr[], int index, int size, vector<vector<int>> &ans, vector<int> temp)

// todo If we pass temp as an reference variable so our space complexity will decrease slightly. So Space Complexity is O(). & Auxilary Space Complexity is O(N^2).
void subSequence(int arr[], int index, int size, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == size)
    {
        ans.push_back(temp);
        return;
    }

    // The value which has been presented on arr[index] is Not Included.
    subSequence(arr, index + 1, size, ans, temp);

    // The value which has been presented on arr[index] is Included.
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, size, ans, temp);

    // Delete the temp last inserted value.
    temp.pop_back();
}

int main()
{
    system("clear");
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> ans; // Space Complexity:- O(2^N * N).
    vector<int> temp;        // Space Complexity:- O(N^2).

    subSequence(arr, 0, size, ans, temp);

    // Print all subsequences.
    cout << "All subsequences of {";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
