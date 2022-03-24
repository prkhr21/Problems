#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

int ans = 0;

int solve(Node *root)
{
    if (root == NULL)
    {
        return ans;
    }
    int L = solve(root->left);
    int R = solve(root->right);
    int left = 1, right = 1;
    if (root->left && root->left->data == root->data + 1)
        left = L + 1;
    if (root->right && root->right->data == root->data + 1)
        right = R + 1;
    int temp = max(left, right);
    ans = max(ans, temp);
    return temp;
}

int longestConsecutive(Node *root)
{
    solve(root);
    if (ans < 2)
        return -1;
    return ans;
}