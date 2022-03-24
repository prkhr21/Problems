#include<bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{
    stack<int> st;
    int j = 0;
    for (int i = 0; i < pushed.size(); i++)
    {
        //push pushed[i] in stack
        st.push(pushed[i]);
        //if stack is not empty & top of stack is equal to popped[j] then pop from stack.
        while (!st.empty() && st.top() == popped[j])
        {
            st.pop();
            j++;
        }
    }
    //if stack is empty then returns true otherwise false.
    return st.empty();
}