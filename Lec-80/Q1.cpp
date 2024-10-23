//* Reverse a linked list data & its next pointer. Means the last node should points to one Node ahead, & so on.
//* Link:- https://leetcode.com/problems/reverse-linked-list/description/
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

//* Method-01
void reverseLL(Node *Head)
{
    vector<int> arr;
    Node *temp = Head;
    while (temp)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    temp = Head;
    int it = arr.size() - 1;
    while (temp)
    {
        temp->data = arr[it--];
        temp = temp->next;
    }
}

//* Method-03
Node *reverseLL(Node *current, Node *previous)
{
    if (current == NULL)
    {
        return previous;
    }

    Node *temp = current->next;
    current->next = previous;
    return reverseLL(temp, current);
}

int main()
{
    system("clear");
    Node *Head = NULL;

    int arr[] = {1, 2, 3, 4, 5};

    // Create a linked list or insert at end.
    Head = createLL(arr, 0, 5);
    cout << "Linked List before reversing data:\n";
    printLL(Head);

    //* Reverse only data not the next pointer without recursion.
    //* Method-01
    reverseLL(Head);
    cout << "Linked List after reversing data:\n";
    printLL(Head);

    //* Reverse the next pointer.
    //* Method-02
    Node *current = Head;
    Node *previous = NULL, *future = NULL;
    while (current)
    {
        future = current->next;
        current->next = previous;
        previous = current;
        current = future;
    }
    Head = previous;

    cout << "Linked List after reversing next pointer without recursion:\n";
    printLL(Head);

    //* Reverse only data not the next pointer with recursion.
    //* Method-03
    Head = reverseLL(Head, NULL);
    cout << "Linked List after reversing next pointer using recursion:\n";
    printLL(Head);

    return 0;
}