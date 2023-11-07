#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,pval,sop,ans,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        ans=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        pval=arr[0],sop=0;
        for(i=1;i<n;i++)
        {
            arr[i]=arr[i]-sop;
            if(arr[i]<=pval)//prefix array changes 
            {
                ans+=pval-arr[i];
                pval=arr[i];
            }
            else//suffix array changes
            {
                sop+=arr[i]-pval;
                ans+=arr[i]-pval;
            }   
        }
        ans+=abs(pval);
        cout<<ans<<endl;
    }
}