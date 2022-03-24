#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    vector<int> ans;
    // heap will store pair of int, 1st int denotes the absolute difference b/w x & arr[i].
    // 2nd int will denotes arr[i];
    // we will use maxheap since we want k values with minimum abs difference with x;
    priority_queue<pair<int, int>> maxheap;
    for (int i = 0; i < arr.size(); ++i)
    {
        maxheap.push({abs(arr[i] - x), arr[i]});
        if (maxheap.size() > k)
            maxheap.pop();
    }
    while (maxheap.size() > 0)
    {
        auto it = maxheap.top();
        ans.push_back(it.second);
        maxheap.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}