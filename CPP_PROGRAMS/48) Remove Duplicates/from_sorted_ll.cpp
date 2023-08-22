/*
    Singly Linked List
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Called" << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int d, int position)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    int count = 1;
    Node *temp = head;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNodeByPosition(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;

        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        // cout << "curr: " << curr->next << endl;
        delete curr;
        // cout << "curr: " << curr->next << endl;
    }
}

void deleteNodeByValue(Node *&head, Node *&tail, int value)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == head)
    {
        head = head->next;
        curr->next = NULL;
        delete curr;
        return;
    }
    else
    {
        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *uniqueSortedList(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;

    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *forward = curr->next->next;
            Node *nodeToDelete = curr->next;
            nodeToDelete->next = NULL;
            delete (nodeToDelete);
            curr->next = forward;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

Node *uniqueUnsortedList(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        Node *prev = curr;

        while (temp != NULL)
        {
            if (curr->data == temp->data)
            {
                Node *forward = temp->next;
                prev->next = forward;
                temp->next = NULL;
                delete (temp);
                temp = forward;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

Node *uniqueUnsortedListMap(Node *head)
{
    if (head == NULL)
        return NULL;

    map<int, bool> visited;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if (visited[curr->data] == true)
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete (curr);
            curr = prev->next;
        }
        else
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

int main()
{
    Node *node1 = new Node(4);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 2);
    print(head);

    insertAtTail(tail, 5);
    print(head);

    insertAtTail(tail, 4);
    print(head);

    insertAtTail(tail, 2);
    print(head);

    insertAtTail(tail, 2);
    print(head);

    // head = uniqueSortedList(head);
    head = uniqueUnsortedList(head);
    print(head);

    return 0;
}
