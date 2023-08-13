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

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtAnyPosition(head, tail, 14, 3);
    print(head);

    insertAtAnyPosition(head, tail, 22, 6);
    print(head);

    insertAtTail(tail, 23);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNodeByPosition(head, tail, 1);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNodeByValue(head, tail, 12);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNodeByValue(head, tail, 23);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNodeByPosition(head, tail, 2);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNodeByValue(head, tail, 20);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNodeByValue(head, tail, 22);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}
