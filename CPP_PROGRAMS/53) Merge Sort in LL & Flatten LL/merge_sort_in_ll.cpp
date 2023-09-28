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

Node *getMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *merge(Node *left, Node *right)
{
    if (left == NULL)
    {
        return right;
    }

    if (right == NULL)
    {
        return left;
    }

    Node *ans = new Node(-1);
    Node *temp = ans;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    return ans->next;
}

Node *mergeSort(Node *head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // Step 1: Find Mid Element
    Node *mid = findMid(head);

    // Step 2: Break LL into 2 halves
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    // Step 3: Recursively Sort Left/Right halves
    left = mergeSort(left);
    right = mergeSort(right);

    // Step 4: Merge Left/Right sorted halves
    Node *result = merge(left, right);

    // Step 5: Return ans
    return result;
}

int main()
{
    Node *node1 = new Node(1);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 9);
    print(head);

    insertAtTail(tail, 8);
    print(head);

    insertAtTail(tail, 3);
    print(head);

    insertAtTail(tail, 6);
    print(head);

    insertAtTail(tail, 4);
    print(head);

    head = mergeSort(head);
    print(head);

    return 0;
}
