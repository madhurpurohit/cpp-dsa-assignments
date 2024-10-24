//* Problem:- Middle of the Linked List.
//* Problem Statement:- Given the head of a singly linked list, return the middle node of the linked list.If there are two middle nodes,return the second middle node.
//* Link:- https://leetcode.com/problems/middle-of-the-linked-list/description/

// todo Slow & Fast Pointer:- Slow pointer means a pointer which moves one step every time & Fast pointer means the pointer which moves two step every time.
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void printLL(Node *Head)
{
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *createLL(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLL(arr, index + 1, size);
    return temp;
}

int main()
{
    system("clear");
    Node *Head = NULL;
    // int arr[] = {2, 4, 6, 8, 10};
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* Create a Linked List or insert at end.
    Head = createLL(arr, 0, size);
    cout << "Linked List before finding middle element:\n";
    printLL(Head);

    //* Find Middle element of Linked List.
    Node *slow = Head, *fast = Head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Head = slow;

    cout << "Linked List after finding middle element:\n";
    printLL(Head);

    return 0;
}