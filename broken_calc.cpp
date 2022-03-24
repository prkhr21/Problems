#include <bits/stdc++.h>
using namespace std;

int brokenCalc(int startValue, int target)
{
    int step = 0;
    // going opposite instead of converting startValue to target we are conveting target to startValue.  
    while (target > startValue)
    {
        // if target is even then divide by 2.
        if (target % 2 == 0)
            target /= 2;
        // else increment by 1.
        else
            target++;
        step++;
    }
    // loop will run till target is greater than startValue.
    // when target becomes less than startValue then we can only add 1 to make it as equal to startValue.
    // no. of ones to be added can be calculated by startValue - target.
    return step + startValue - target;
}