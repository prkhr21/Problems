#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> ans;
    map<int, int> freq;     // stores frequency of elements.
    // creating minheap which stores pair of int.
    // 1st int denotes the frequency of elements.
    // 2nd int denotes the element itself
    // when pair is stored in heap sorting will be based on 1st part.
    // we are using minheap because we want to keep track of k highest frequency & in min heap smaller frequency will be popped after k insertion.
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;
    for (auto it : freq)
    {
        minheap.push({it.second, it.first});
        if (minheap.size() > k)
            minheap.pop();
    }
    while (minheap.size() > 0)
    {
        auto it = minheap.top();
        ans.push_back(it.second);
        minheap.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}