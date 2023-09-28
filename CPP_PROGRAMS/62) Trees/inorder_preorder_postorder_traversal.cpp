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

void inorder(node *root)
{
}

void preorder(node *root)
{
}

void postorder(node *root)
{
}

int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    cout << "Enter the Root: " << endl;
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}