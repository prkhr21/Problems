#include <bits/stdc++.h>
using namespace std;

int minBitFlips(int start, int goal)
{
    int ans = start xor goal, count = 0;
    while (ans > 0)
    {
        if (ans % 2 == 1)
            count++;
        ans /= 2;
    }
    return count;
}