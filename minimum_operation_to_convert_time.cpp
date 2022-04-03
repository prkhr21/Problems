// solution of Abhinandan Kumar Pun (BABA)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string solve(string s, int min)
    {
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3));
        m += min;
        if (m >= 60)
        {
            m = m % 60;
            h = h + 1;
            if (h == 24)
                h = 0;
        }
        string hh = "00";
        string mm = "00";
        int i = 1;
        while (m != 0)
        {
            mm[i] = m % 10 + '0';
            m = m / 10;
            i--;
        }

        i = 1;
        while (h != 0)
        {
            hh[i] = h % 10 + '0';
            h = h / 10;
            i--;
        }
        return hh + ":" + mm;
    }
    int convertTime(string current, string correct)
    {
        vector<int> min = {1, 5, 15, 60};
        queue<string> q;
        map<string, int> m;
        q.push(current);
        int level = 0;
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                string curr = q.front();
                q.pop();
                if (curr == correct)
                    return level;
                if (m.find(curr) != m.end())
                    continue;
                m[curr] = 1;
                for (int i = 0; i < 4; i++)
                {
                    string newCurr = solve(curr, min[i]);
                    q.push(newCurr);
                }
            }
            level++;
        }
        return level;
    }
};