#include <bits/stdc++.h>
using namespace std;

//if we add pattern[0] then best option is to add at the begin.
//if we add pattern[1] then best option is to add at the last.
long long maximumSubsequenceCount(string text, string pattern)
{
    //count1 stores the occurance of pattern[0] in text.
    //count2 stores the occurance of pattern[1] in text.
    long long res = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == pattern[1])
        {
            //make subsequence with every pattern[0] before text[i];
            res += count1;
            count2++;
        }
        if (text[i] == pattern[0])
        {
            //make subsequence with every pattern[1] that comes after it in text.
            count1++;
        }
    }
    //count1 represent all the subsequence made by adding pattern[1] in end.
    //count2 represent all the subsequence made by addign pattern[0] in begin.
    //res count occurance of all subsequence in original text.
    return res + max(count1, count2);
}