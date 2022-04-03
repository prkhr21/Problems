#include<bits/stdc++.h>
using namespace std;

void insertR(vector<int>& arr, int val)
{
    if(arr.size() == 0 || arr[arr.size() - 1] <= val)
    {
        arr.push_back(val);
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    insertR(arr, val);
    arr.push_back(temp);
    return;
}

void sortR(vector<int>& arr)
{
    if(arr.size() <= 1)
        return;
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sortR(arr);
    insertR(arr, temp);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sortR(arr);
    for(auto i : arr)
        cout<<i<<" ";
    return 0;
}