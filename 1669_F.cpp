#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,l,r,sum1,sum2,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>arr(n+1);
        for(i=1;i<=n;i++)
            cin>>arr[i];
        l=1,r=n;
        sum1=arr[l],sum2=arr[r];
        count=0;
        while(l<r)
        {
            if(sum1==sum2)
                count=l+n-r+1;
            if(sum1<=sum2)
            {
                l++;
                sum1+=arr[l];
            }
            else if(sum2<sum1)
            {
                r--;
                sum2+=arr[r];
            }
        }
        //cout<<l<<" "<<r<<endl;
        cout<<count<<endl;
    }
}