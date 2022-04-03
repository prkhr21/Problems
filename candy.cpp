#include <bits/stdc++.h>
using namespace std;

int candy(vector<int> &ratings)
{
    int n = ratings.size();
    vector<int> amt(n, 1);
    for (int i = 1; i < n; i++)
    {
        if (ratings[i] > ratings[i - 1])
            amt[i] = amt[i - 1] + 1;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (ratings[i] > ratings[i + 1] && amt[i] <= amt[i + 1])
            amt[i] = amt[i + 1] + 1;
    }
    int sum = 0;
    for (int i : amt)
        sum += i;
    return sum;
}