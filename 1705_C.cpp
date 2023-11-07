#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool solve()
{
    ll n,c,q,i,idx,gap;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    vector<pair<ll,ll>>range(c),query(c);//modified bounds, actual bounds
    ll curr=n;
    for(i=0;i<c;i++)
    {
        cin>>query[i].first>>query[i].second;
        ll qlen=query[i].second-query[i].first+1;
        range[i].first=curr+1;
        range[i].second=curr+qlen;
        curr=range[i].second;
    }
    while(q--)
    {
        cin>>idx;
        for(i=c-1;i>=0;--i)
        {
            if(idx>=range[i].first && idx<=range[i].second)
            {
                gap=idx-range[i].first;
                idx=query[i].first+gap;
            }
        }
        cout<<s[idx-1]<<endl;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}