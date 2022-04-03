#include<bits/stdc++.h>
using namespace std;

void insertR(stack<int>& st, int val)
{
    if(st.empty())
    {
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    insertR(st, val);
    st.push(temp);
    return;
}

void reverseR(stack<int>& st)
{
    if(st.size() == 1)
        return;
    int temp = st.top();
    st.pop();
    reverseR(st);
    insertR(st, temp);
    return;
}

int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        st.push(temp);
    }
    reverseR(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}