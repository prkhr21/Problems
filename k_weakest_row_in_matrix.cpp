#include <bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    int m = mat.size(), n = mat[0].size(), count = 0;
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
                count++;
            else
                break;
        }
        minheap.push({count, i});
        count = 0;
    }
    while (k--)
    {
        auto it = minheap.top();
        ans.push_back(it.second);
        minheap.pop();
    }
    return ans;
}