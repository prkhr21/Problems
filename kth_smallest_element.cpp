#include<bits/stdc++.h>
using namespace std;

int kth_smallest(vector<int> &nums, int k)
{
    priority_queue<int> maxheap;
    for(int i = 0; i < nums.size(); i++)
    {
        maxheap.push(nums[i]);
        if(maxheap.size() > k)
            maxheap.pop();
    }
    return maxheap.top();
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
    int ans = kth_smallest(nums, k);
    cout<<ans<<"\n";
    return 0;
}