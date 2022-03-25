#include <bits/stdc++.h>
using namespace std;

int twoCitySchedCost(vector<vector<int>> &costs)
{
    int n = costs.size(), cost_A = 0;
    vector<int> diff_B;
    for (int i = 0; i < n; i++)
    {
        // finding total cost if all person went to city A. 
        cost_A += costs[i][0];
        // finding difference for all persons between city B & city A.
        diff_B.push_back(costs[i][1] - costs[i][0]);
        // if the difference is negative that means city B for that person is closer than city A.
    }
    // sorting difference b/w city B & city A.
    sort(diff_B.begin(), diff_B.end());
    // we have to send half people to city A & half to city B.
    n = n / 2;
    for (int i = 0; i < n; i++)
        // 1st n / 2 people for whom city B is closest will got to city B.
        // if difference is -ve then difference will be subtracted from total cost if difference is +ve then it will be added. 
        cost_A += diff_B[i];
    return cost_A;
}