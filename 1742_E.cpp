#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,q,i,sum,ind,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<ll>steps(n),ans(q);
        vector<pair<ll,ll>>qu;
        for(i=0;i<n;i++)
            cin>>steps[i];
        for(i=0;i<q;i++)
        {
            cin>>x;
            qu.push_back({x,i});
        }
        sort(qu.begin(),qu.end());
        ind=0,sum=0;
        for(i=0;i<q;i++)
        {
            while(ind<n)
            {
                if(steps[ind]<=qu[i].first)
                {
                    sum+=steps[ind];
                    ind++;
                }
                else
                    break;
            }
            ans[qu[i].second]=sum;
        }
        for(i=0;i<q;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}