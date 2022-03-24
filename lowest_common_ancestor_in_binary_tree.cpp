#include <bits/stdc++.h>
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

Node *lca(Node *root, int n1, int n2)
{
    if (!root || root->data == n1 || root->data == n2)
        return root;
    Node *L = lca(root->left, n1, n2);
    Node *R = lca(root->right, n1, n2);
    if (L && R)
        return root;
    if (L)
        return L;
    return R;
}