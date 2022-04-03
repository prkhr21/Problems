#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &frnd, int k, int idx, int &ans)
{
    if (frnd.size() == 1)
    {
        ans = frnd[0];
        return;
    }
    idx = (idx + k) % frnd.size();
    frnd.erase(frnd.begin() + idx);
    solve(frnd, k, idx, ans);
}

int findTheWinner(int n, int k)
{
    int ans;
    vector<int> frnd(n, 0);
    for (int i = 0; i < n; i++)
        frnd[i] = i + 1;
    solve(frnd, k - 1, 0, ans);
    return ans;
}