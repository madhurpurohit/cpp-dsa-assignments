//* Problem: Write a C++ program that reads integers from a text file named z.txt and outputs them to the console. Each integer in the file is separated by a space. The program should handle errors in case the file is not found and should ensure that all numbers are printed correctly, even the last one. & after the reading you will sort the data & write in it on that file.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    system("clear");
    ifstream fin;
    fin.open("z.txt");

    //* if (!fin): This checks if the file was opened successfully before attempting to read from it. It provides a more robust error check in case the file does not exist.
    if (!fin)
    {
        // Check if file is successfully opened
        cout << "Error opening file!" << endl;
        return 1;
    }

    int a;
    vector<int> arr;

    while (fin >> a) // while (fin >> a): This checks whether the input operation was successful. If it fails (like when reaching the end of the file), the loop exits. This ensures that the last number is printed correctly.
    {
        cout << a << " ";
        arr.push_back(a);
    }

    fin.close();

    ofstream fout;
    fout.open("z.txt");

    fout << "Data before sorting.\n";
    for (int i = 0; i < arr.size(); i++)
        fout << arr[i] << " ";

    sort(arr.begin(), arr.end());
    fout << "\nAfter sorting data\n";

    for (int i = 0; i < arr.size(); i++)
        fout << arr[i] << " ";

    fout.close();

    return 0;
}