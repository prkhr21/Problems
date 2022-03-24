#include<bits/stdc++.h>
using namespace std;

bool divideArray(vector<int> &nums)
{
    if (nums.size() % 2 == 1)
        return false;
    map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;
    for (auto it : freq)
    {
        if (it.second % 2 == 1)
            return false;
    }
    return true;
}