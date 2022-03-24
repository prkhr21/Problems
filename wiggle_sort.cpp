//nums[0] < nums[1] > nums[2] < nums[3] > nums[4]...

#include <bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int> &nums)
{
    //priority_queue - max element at top.
    //even index - smaller element.
    //odd index - larger elements.
    priority_queue<int> heap(nums.begin(), nums.end());
    //loop runs for i = 1, 3, 5...
    for (int i = 1; i < nums.size(); i += 2)
    {
        //nums[1] = max_ele, nums[3] = 2nd_max_ele & so on.
        nums[i] = heap.top();
        heap.pop();
    }
    //loop runs for i = 0, 2, 4...
    for (int i = 0; i < nums.size(); i += 2)
    {
        //nums[0] = element smaller than nums[1].
        //nums[2] = smaller than bot nums[1] & nums[3].
        nums[i] = heap.top();
        heap.pop();
    }
}