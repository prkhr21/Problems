#include <bits/stdc++.h>
using namespace std;

int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
{
    int n = tops.size();
    vector<int> A(7, 0);
    vector<int> B(7, 0);
    vector<int> C(7, 0);
    for (int i = 0; i < n; i++)
    {
        A[tops[i]]++;
        B[bottoms[i]]++;
        if (tops[i] == bottoms[i])
            C[tops[i]]++;
    }
    for (int i = 1; i < 7; i++)
    {
        if (A[i] + B[i] - C[i] == n)
            return n - max(A[i], B[i]);
    }
    return -1;
}