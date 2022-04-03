#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, ans = 0;
        cin>>a>>b;
        if(a == 0)
            cout<<"1\n";
        else if(b == 0)
            cout<<a + 1<<"\n";
        else
        {
            ans += 2 * b + 1 * a + 1;
            cout<<ans<<"\n";
        }
    }
    return 0;
}