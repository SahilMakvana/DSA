/*
    Doubly Linked List
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
    }
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
    }
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int d, int position)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
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
        insertAtTail(head, tail, d);
        return;
    }

    Node *newNode = new Node(d);
    temp->next->prev = newNode;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNodeByPosition(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;

        if (temp->next == NULL)
        {
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }

        head = temp->next;
        head->prev = NULL;
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
            prev->next = NULL;
            curr->prev = NULL;
            delete curr;
            return;
        }

        curr->next->prev = prev;
        prev->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
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
        if (curr->next == NULL)
        {
            head = NULL;
            tail = NULL;
            delete curr;
            return;
        }
        head = head->next;
        head->prev = NULL;
        curr->next = NULL;
        delete curr;
        return;
    }
    else
    {
        if (curr->next == NULL)
        {
            tail = prev;
            prev->next = NULL;
            curr->prev = NULL;
            delete curr;
            return;
        }

        curr->next->prev = prev;
        prev->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
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

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, tail, 12);
    print(head);

    insertAtTail(head, tail, 15);
    print(head);

    insertAtAnyPosition(head, tail, 11, 2);
    print(head);

    insertAtAnyPosition(head, tail, 31, 1);
    print(head);

    insertAtAnyPosition(head, tail, 41, 6);
    print(head);

    deleteNodeByPosition(head, tail, 2);
    print(head);

    deleteNodeByPosition(head, tail, 1);
    print(head);

    deleteNodeByPosition(head, tail, 4);
    print(head);

    deleteNodeByValue(head, tail, 10);
    print(head);

    deleteNodeByValue(head, tail, 11);
    print(head);

    deleteNodeByValue(head, tail, 15);
    cout << "DONE" << endl;
    print(head);

    cout << getLength(head);

    // cout << head->data << endl;
    // cout << tail->data << endl;

    return 0;
}
