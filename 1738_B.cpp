#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t,n,k,i,f,x;
   cin>>t;
   while(t--)
   {
        cin>>n>>k;
        vector<ll>arr(n+1);
        vector<ll>acarr(n+1);
        f=0;
        for(i=1;i<=k;i++)
            cin>>arr[i];
        if(k==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(i=1;i<k;i++)
        {
            acarr[i]=arr[i+1]-arr[i];
            if(i!=1 && acarr[i]<acarr[i-1])
            {
                f=1;
                break;
            }
        }
        // for(i=1;i<k;i++)
        //     cout<<acarr[i]<<" ";
        // cout<<endl;
        if(f==1 || arr[1]>(acarr[1]*(n-k+1)))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
   }
}