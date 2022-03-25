#include <bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], long long n)
{
    long long cost = 0;
    priority_queue<long long, vector<long>, greater<long long>> minheap;
    for (int i = 0; i < n; i++)
        minheap.push(arr[i]);
    while (minheap.size() > 1)
    {
        long long a = minheap.top();
        minheap.pop();
        long long b = minheap.top();
        minheap.pop();
        cost += a + b;
        minheap.push(a + b);
    }
    return cost;
}