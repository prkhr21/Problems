#include<bits/stdc++.h>
using namespace std;

void solve2(int n)
{
    if(n < 1)
        return;
    solve2(n - 1);
    cout<<n<<"\t";
}

void solve(int n)
{
    if(n < 1)
        return;
    cout<<n<<"\t";
    solve(--n);
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    cout<<"\n";
    solve2(n);
    return 0;
}