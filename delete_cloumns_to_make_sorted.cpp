#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string> &strs)
{
    int m = strs.size(), n = strs[0].size(), ans = 0;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            s += strs[j][i];
        // cout<<s<<"\n";
        string t = s;
        sort(t.begin(), t.end());
        if (s.compare(t) != 0)
            ans++;
        s = "";
    }
    return ans;
}