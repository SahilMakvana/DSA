/*
    Circular Doubly Linked List
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

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAfterValue(Node *&tail, int d, int element)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        curr->next->prev = temp;
        temp->next = curr->next;
        curr->next = temp;
        temp->prev = curr;
    }
}

void deleteGivenValue(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is empty, please check agail" << endl;
        return;
    }
    else if (tail->next == tail)
    {
        tail->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = NULL;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = tail->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == tail)
        {
            tail = tail->next;
        }

        curr->next->prev = prev;
        prev->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is empty..." << endl;
        return;
    }

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertAfterValue(tail, 10, 1);
    print(tail);

    insertAfterValue(tail, 11, 10);
    print(tail);

    insertAfterValue(tail, 9, 10);
    print(tail);

    deleteGivenValue(tail, 10);
    print(tail);

    deleteGivenValue(tail, 11);
    print(tail);

    deleteGivenValue(tail, 9);
    print(tail);

    insertAfterValue(tail, 10, 1);
    print(tail);

    return 0;
}
