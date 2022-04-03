#include<bits/stdc++.h>
using namespace std;

void toh(int n, char src, char dest, char aux)
{
    if(n == 0)
    {
        return;
    }
    toh(n - 1, src, aux, dest);
    cout<<"Disk "<<n<<" from "<<src<<" to "<<dest<<"\n";
    toh(n - 1, aux, dest, src);
}

int main()
{
    int n;
    cin>>n;
    toh(n, 'S', 'D', 'A');
    return 0;
}