#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll t,n,k,i,count;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>arr(n);
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==k)
                count++;
        }
        if(n==1 && arr[0]==k)
            cout<<"YES"<<endl;
        else if(count==0)
            cout<<"NO"<<endl;
        else if(count==1 && arr[n-1]==k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}