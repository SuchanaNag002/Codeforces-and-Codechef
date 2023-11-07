#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll mod=1e9+7;
    ll n,k;
    cin>>n>>k;
    ll ans=0,p=1;
    while(k)
    {
        if((k%2)==1)
            ans=(ans+p)%mod;
        k=k/2;
        p=(p*n)%mod;
    }
    cout<<ans<<endl;
}