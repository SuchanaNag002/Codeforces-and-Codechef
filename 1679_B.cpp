#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,sum=0,i,up=-1,x,t,z;
    cin>>n>>q;
    ll arr[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    unordered_map<ll,ll>mpp;//ind,last val
    while(q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>i>>x;
            if(up==-1)
            {
                if(x>arr[i])
                    sum+=(x-arr[i]);
                else
                    sum-=(arr[i]-x);
                arr[i]=x;
            }
            else// 1 after a 2 has been encountered
            {
                if(mpp[i]==0)//change at a new index
                    z=up;
                else//change again at same index
                    z=mpp[i];
                if(x>z)
                    sum+=(x-z);
                else
                    sum-=(z-x);
                mpp[i]=x;
            }
            cout<<sum<<endl;
        }
        else
        {
            cin>>x;
            sum=x*n;
            cout<<sum<<endl;
            mpp.clear();
            up=x;
        }
    }
}