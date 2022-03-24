#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> freq;
unordered_map<int, stack<int>> group_stack;
int max_freq = 0;

void push(int val)
{
    freq[val]++;
    max_freq = max(max_freq, freq[val]);
    group_stack[freq[val]].push(val);
}

int pop()
{
    int top_max_freq = group_stack[max_freq].top();
    group_stack[max_freq].pop();
    freq[top_max_freq]--;
    if (group_stack[max_freq].size() == 0)
        max_freq--;
    return top_max_freq;
}