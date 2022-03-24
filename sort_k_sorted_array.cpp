#include<bits/stdc++.h>
using namespace std;

vector<int> k_sorted(vector<int> &nums, int k)
{
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int i = 0; i < nums.size(); ++i)
    {
        minheap.push(nums[i]);
        if(minheap.size() > k)
        {
            ans.push_back(minheap.top());
            minheap.pop();
        }
    }
    while(minheap.size() > 0)
    {
        ans.push_back(minheap.top());
        minheap.pop();
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
    vector<int> ans = k_sorted(nums, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<"\t";   
    }
    return 0;
}