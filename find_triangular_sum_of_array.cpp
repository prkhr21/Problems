#include <bits/stdc++.h>
using namespace std;

int triangularSum(vector<int> &nums)
{
    vector<int> nums2;
    while (nums.size() > 1)
    {
        for (int i = 0; i < nums.size() - 1; i++)
            nums2.push_back((nums[i] + nums[i + 1]) % 10);
        nums = nums2;
        nums2.clear();
    }
    return nums[0];
}