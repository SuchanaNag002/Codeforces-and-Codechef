#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
ll bs(ll low, ll high,ll k, vector<vector<ll>>&hp)
{
    ll ind,mid;
    while(low<=high)
    {
        mid=low+(high-low)>>1;
        if(arr[mid][0]<=k)
            low=mid+1;
        else
        {
            high=mid-1;
            ind=mid;
        }
    }
    return ind;
}
int main()
{
    ll n,k,i,t,idx;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>h(n),p(n);
        vector<vector<ll>>hp(n,vector<ll>(2));
        for(i=0;i<n;i++)
            cin>>h[i];
        for(i=0;i<n;i++)
            cin>>p[i];
        for(i=0;i<n;i++)
            hp.push_back({h[i],p[i]});
        sort(hp.begin(),hp.end());
        if(k==0 && idx!=n-1)
        {
            f=1;
            break;
        }
    }
}