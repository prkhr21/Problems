#include<bits/stdc++.h>
using namespace std;

void solve(string S, int idx, string res, vector<string>& ans)
{
    if(S[idx] >= 48 && S[idx] <= 57)
    {
        res += S[idx];
        solve(S, idx + 1, res, ans);
        return;
    }
    if(idx == S.length())
    {
        ans.push_back(res);
        return;
    }
    res += S[idx];
    solve(S, idx + 1, res, ans);
    res.pop_back();
    if(S[idx] >= 65 && S[idx] <= 90)
        res += (S[idx] + 32);
    else if(S[idx] >= 97 && S[idx] <= 122)
        res += (S[idx] - 32);
    solve(S, idx + 1, res, ans);
}

int main()
{
    string S = "ab", res;
    cin>>S;
    vector<string> ans;
    solve(S, 0, res, ans);
    for(auto it : ans)
        cout<<"|"<<it<<"|";
    return 0;
}