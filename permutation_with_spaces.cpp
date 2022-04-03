#include <bits/stdc++.h>
using namespace std;

void solve(string S, int idx, string res, vector<string> &ans)
{
    res += S[idx];
    if (idx == S.length() - 1)
    {
        ans.push_back(res);
        return;
    }
    solve(S, idx + 1, res, ans);
    res += ' ';
    solve(S, idx + 1, res, ans);
}

vector<string> permutation(string S)
{
    vector<string> ans;
    string res;
    solve(S, 0, res, ans);
    sort(ans.begin(), ans.end());
    return ans;
}