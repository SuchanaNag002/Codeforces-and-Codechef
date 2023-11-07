#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,x;
    cin>>n;
    vector<int>arr;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    if(arr[n-1]>=(arr[n-2]+arr[0]))
    {
        if((arr[n-2]+arr[n-3])<=arr[n-1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else 
            swap(arr[n-1],arr[n-2]);
    }
    cout<<"YES"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}