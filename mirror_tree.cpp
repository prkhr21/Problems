#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void mirror(Node *node)
{
    if (!node)
        return;
    queue<Node *> Q;
    Q.push(node);
    while (!Q.empty())
    {
        Node *ptr = Q.front();
        Q.pop();
        Node *temp = ptr->left;
        ptr->left = ptr->right;
        ptr->right = temp;
        if (ptr->left)
            Q.push(ptr->left);
        if (ptr->right)
            Q.push(ptr->right);
    }
    return;
}