#include<bits/stdc++.h>
#define ll long long
using namespace std;
//a*r*r*r=capacity(capacity= last val of a quadruplet)
ll possible(ll capacity)
{
    ll ret=0;
    for(ll k=2;k*k*k<=capacity;k++)
        ret+=(capacity/(k*k*k));
    return ret;
}
int main()
{
    ll m;
    cin>>m;
    ll low=0,high=1e18;
    ll ans=-1;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        ll ways=possible(mid);
        if(ways==m)
            ans=mid;
        else if(ways>=m)
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<ans<<endl;
}