#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        vector<int> qty;
        for(int i = 0; i < size; i++)
        {
            int temp;
            cin>>temp;
            qty.push_back(temp);
        }
        if(qty.size() < 2)
        {
            if(qty[0] > 1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
        {
            sort(qty.begin(), qty.end());
            if(qty[qty.size() - 1] - qty[qty.size() - 2] > 1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}