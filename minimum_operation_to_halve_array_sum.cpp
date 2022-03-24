#include <bits/stdc++.h>
using namespace std;

int halveArray(vector<int> &nums)
{
    double n = nums.size(), sum = 0, step = 0, reduce = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    priority_queue<double> pq(nums.begin(), nums.end());
    while (sum - reduce > sum / 2)
    {
        double temp = pq.top();
        pq.pop();
        reduce += temp / 2;
        pq.push(temp / 2);
        step++;
    }
    return step;
}

int halveArray(vector<int> &nums)
{
    //accumulate function is used to get sum of given vector.
    double s = accumulate(begin(nums), end(nums), 0.0);
    //k stores sum of reduction we have made, i counts the step.
    double k = 0, i = 0;
    //creating priority queue & inserting given vector in it.
    priority_queue<double> pq(begin(nums), end(nums));
    //original_sum - total_reduction becomes greater than half of original_sum break loop.
    while (s - k > s / 2)
    {
        double x = pq.top();
        pq.pop();
        k += x / 2;
        pq.push(x / 2);
        i++;
    }
    return i;
}