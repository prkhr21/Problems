// smallest string with a given numeric value.

#include <bits/stdc++.h>
using namespace std;

string getSmallestString(int n, int k)
{
    string ans = "";
    for (int i = 0; i < n; i++)
        ans += 'a';
    k = k - n;
    int i = n - 1;
    while (k > 0)
    {
        if (k > 25)
        {
            ans[i] = 'a' + 25;
            k -= 25;
        }
        else
        {
            ans[i] = 'a' + k;
            k = 0;
        }
        i--;
    }
    return ans;
}