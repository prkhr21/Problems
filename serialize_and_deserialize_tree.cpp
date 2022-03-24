#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> serialize(Node *root)
{
    vector<int> res;
    if (!root)
    {
        //if a node does not exist we put 0 in vector.
        res.push_back(0);
        return res;
    }
    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node *ptr = Q.front();
        Q.pop();
        if (ptr == NULL)
            res.push_back(0);
        else
        {
            res.push_back(ptr->data);
            Q.push(ptr->left);
            Q.push(ptr->right);
        }
    }
    return res;
}

Node *createNode(int val)
{
    if (val == 0)
        return NULL;
    Node *new_node = new Node(val);
    return new_node;
}

Node *deSerialize(vector<int> &A)
{
    int i = 0;
    if (A[i] == 0)
        return NULL;
    Node *root = createNode(A[i++]);
    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node *ptr = Q.front();
        Q.pop();
        ptr->left = createNode(A[i++]);
        ptr->right = createNode(A[i++]);
        if (ptr->left)
            Q.push(ptr->left);
        if (ptr->right)
            Q.push(ptr->right);
    }
    return root;
}