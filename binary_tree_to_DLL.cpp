#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
}

void inorder(Node *root, vector<int> &V)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, V);
    V.push_back(root->data);
    inorder(root->right, V);
}

Node *bToDLL(Node *root)
{
    vector<int> V;
    inorder(root, V);
    if (root == NULL)
    {
        return NULL;
    }
    Node *head = newNode(-1);
    Node *ptr = head;
    for (int i = 0; i < V.size(); i++)
    {
        if (head->data == -1)
        {
            head->data = V[i];
        }
        else
        {
            Node *new_node = newNode(V[i]);
            new_node->left = ptr;
            ptr->right = new_node;
            ptr = ptr->right;
        }
    }
    return head;
}