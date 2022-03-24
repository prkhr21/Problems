#include <bits/stdc++.h>
using namespace std;

vector<int> frequencySort(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    priority_queue<pair<int, int>> minheap;
    unordered_map<int, int> freq_map;
    for (int i = 0; i < n; i++)
        freq_map[nums[i]]++;
    for (auto it : freq_map)
        // by multiplying key by -1 we can use maxheap as minheap.
        minheap.push({-(it.second), it.first});
    while (!minheap.empty())
    {
        auto it = minheap.top();
        int i = -it.first;
        int j = it.second;
        while (i--)
            ans.push_back(j);
        minheap.pop();
    }
    return ans;
}