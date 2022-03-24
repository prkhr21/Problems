#include <bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string s)
{
    string ans = "";
    map<char, int> freq;
    map<char, bool> visi;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
        visi[s[i]] = false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]--;
        if (visi[s[i]] == false)
        {
            while (ans.size() > 0 && ans.back() > s[i] && freq[ans.back()] > 0)
            {
                visi[ans.back()] = false;
                ans.pop_back();
            }
            ans += s[i];
            visi[s[i]] = true;
        }
    }
    return ans;
}