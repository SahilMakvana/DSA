#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

public:
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Left of " << data << ": " << endl;
    root->left = buildTree(root->left);

    cout << "Right of " << data << ": " << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node *root = NULL;
    cout << "Enter the Root: " << endl;
    root = buildTree(root);
    return 0;
}