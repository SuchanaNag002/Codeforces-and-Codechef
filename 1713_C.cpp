#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll next_square(ll m)
{
    ll root=sqrt(m);
    if(root*root==m)
        return m;
    return (root+1)*(root+1);
}
void fill_func(ll n,vector<ll>&ans)
{
    if(n==0)
        return;
    ll val=n;
    ll diff=next_square(n-1)-(n-1);
    for(ll i=diff;i<n;i++)
        ans[i]=--val;
    fill_func(val,ans);
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>ans(n);
        fill_func(n,ans);
        for(auto it:ans)
            cout<<it<<" ";
        cout<<endl;
    }
}