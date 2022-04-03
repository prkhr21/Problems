#include<bits/stdc++.h>
using namespace std;

void delMiddle(stack<int>& st, int mid)
{
    if(st.size() == mid)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    delMiddle(st, mid);
    st.push(temp);
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
    int mid = n / 2 + 1;
    delMiddle(st, mid);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}