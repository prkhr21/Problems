#include<bits/stdc++.h>
using namespace std;

vector<int> kth_smallest(vector<int> &nums, int k)
{
    vector<int> ans;
    priority_queue<int> maxheap;
    for(int i = 0; i < nums.size(); i++)
    {
        maxheap.push(nums[i]);
        if(maxheap.size() > k)
        {
            ans.push_back(maxheap.top());
            maxheap.pop();
        }
    }
    return ans;
}

int main()
{
    int size, data, k;
    cin>>size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        cin>>data;
        nums.push_back(data);
    }
    cin>>k;
    vector<int> ans = kth_smallest(nums, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<"\t";   
    }
    return 0;
}