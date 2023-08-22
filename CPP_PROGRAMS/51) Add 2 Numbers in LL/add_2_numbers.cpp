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

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void insertAtTailNew(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        int val2 = 0;

        if (first != NULL)
        {
            val1 = first->data;
            first = first->next;
        }

        if (second != NULL)
        {
            val2 = second->data;
            second = second->next;
        }

        int sum = val1 + val2 + carry;
        int digit = sum % 10;
        carry = sum / 10;

        insertAtTailNew(ansHead, ansTail, digit);
    }

    return ansHead;
}

int main()
{
    Node *first = new Node(1);

    Node *tail1 = first;
    print(first);

    insertAtTail(tail1, 3);
    print(first);

    insertAtTail(tail1, 5);
    print(first);

    Node *second = new Node(2);

    Node *tail2 = second;
    print(second);

    insertAtTail(tail2, 4);
    print(second);

    insertAtTail(tail2, 5);
    print(second);

    // Step 1: Reverse input LL
    first = reverse(first);
    second = reverse(second);

    // Step 2: Add 2 LL
    Node *ans = add(first, second);

    // Step 3: Reverse ans LL
    ans = reverse(ans);
    print(ans);

    return 0;
}
