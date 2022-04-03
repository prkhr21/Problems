#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int idx, vector<int> res, vector<vector<int>> &ans)
{
    if (idx == nums.size())
    {
        ans.push_back(res);
        return;
    }
    solve(nums, idx + 1, res, ans);
    res.push_back(nums[idx]);
    solve(nums, idx + 1, res, ans);
    return;
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> res;
    solve(nums, 0, res, ans);
    // sort(ans.begin(), ans.end());
    return ans;
}