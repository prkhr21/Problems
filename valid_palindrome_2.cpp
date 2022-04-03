#include <bits/stdc++.h>
using namespace std;

bool validPalindrome(string s)
{
    int i = 0, j = s.length() - 1, count1 = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            i++;
            count1++;
        }
        else
        {
            i++;
            j--;
        }
        if (count1 > 1)
            break;
    }
    i = 0, j = s.length() - 1;
    int count2 = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            j--;
            count2++;
        }
        else
        {
            i++;
            j--;
        }
        if (count2 > 1)
            break;
    }
    if (count1 == 1 || count2 == 1)
        return true;
    if (count1 == 0 || count2 == 0)
        return true;
    return false;
}