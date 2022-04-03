#include <bits/stdc++.h>
using namespace std;

void solve(int N, int count1, int count0, string res, vector<string> &ans)
{
    if (count1 + count0 == N)
    {
        ans.push_back(res);
        return;
    }
    if (count1 + count0 < N)
    {
        res += '1';
        solve(N, count1 + 1, count0, res, ans);
        res.pop_back();
    }
    if (count1 > count0)
    {
        res += '0';
        solve(N, count1, count0 + 1, res, ans);
        res.pop_back();
    }
}

vector<string> NBitBinary(int N)
{
    vector<string> ans;
    string res;
    solve(N, 0, 0, res, ans);
    return ans;
}