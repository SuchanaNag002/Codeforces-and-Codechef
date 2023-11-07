#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
ll lcm(ll x,ll y)
{
    return (x*y)/(__gcd(x,y));
}
void solve()
{
    ll n,i;
    cin>>n;
    vector<ll>arr(n+2,1),comp(n+2,1);
    for(i=1;i<=n;i++)
        cin>>arr[i];
    for(i=1;i<=n+1;i++)
        comp[i]=lcm(arr[i-1],arr[i]);
    for(i=1;i<=n;i++)
    {
        if(__gcd(comp[i],comp[i+1])!=arr[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);                         
    cin.tie(NULL);  
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
}