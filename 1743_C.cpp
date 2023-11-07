#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,curr,sum,ind;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        s="0"+s+"0";
        vector<ll>improve;
        sum=ind=curr=0;
        vector<ll>arr(n+2,0);
        for(i=1;i<=n;i++)
            cin>>arr[i];
        for(i=0;i<n+2;i++)
        {
            if(s[i]=='0')
            {
                improve.push_back(curr);
                curr=0;
                ind=i;
            }
            else
                curr=max(curr,arr[ind]-arr[i]);
        }
        for(i=0;i<n+2;i++)
        {
            if(s[i]=='1')
                sum+=arr[i];
        }
        for(auto elt:improve)
            sum+=elt;
        cout<<sum<<endl;
    }
}