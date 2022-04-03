#include <bits/stdc++.h>
using namespace std;

int maximumTop(vector<int> &nums, int k)
{
    if (nums.size() == 1)
    {
        if (k % 2 == 0)
            return nums[0];
        return -1;
    }
    if (k > nums.size())
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - 1];
    }
    if (k == 0)
        return nums[0];
    if (k == 1)
        return nums[1];
    priority_queue<int> maxheap;
    for (int i = 0; i < k - 1; i++)
        maxheap.push(nums[i]);
    return max(maxheap.top(), nums[k]);
}