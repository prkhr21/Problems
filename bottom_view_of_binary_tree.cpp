#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

vector<int> bottomView(Node *root)
{
    vector<int> ans;
    map<int, int> M;
    queue<pair<Node *, int>> Q;
    Q.push({root, 0});
    while (!Q.empty())
    {
        auto it = Q.front();
        Q.pop();
        Node *new_node = it.first;
        int line = it.second;
        M[line] = new_node->data;
        if (new_node->left)
        {
            Q.push({new_node->left, line - 1});
        }
        if (new_node->right)
        {
            Q.push({new_node->right, line + 1});
        }
    }
    for (auto it : M)
    {
        ans.push_back(it.second);
    }
    return ans;
}