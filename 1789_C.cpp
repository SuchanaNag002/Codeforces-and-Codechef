#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, p, v, ans, numPresArray, numAbsArray, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<ll>arr(n);
        vector<pair<ll,ll>>vec;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            vec.push_back({arr[i],0});
        }
        unordered_map<ll,vector<pair<ll,ll>>>dp;//number, opening time, closing time
        for(i=1;i<=m;i++)
        {
            cin>>p>>v;
            p--;
            dp[vec[p].first].push_back({vec[p].second,i});
            vec[p]={v,i};
        }
        for(i=0;i<n;i++)
            dp[vec[i].first].push_back({vec[i].second,m+1});
        ans=0;
        for(auto it:dp)
        {
            numPresArray=0;
            for(auto& time:it.second)
                numPresArray+=(time.second-time.first);
            numAbsArray=m+1-numPresArray;
            ans+=(numPresArray*numAbsArray)+((numPresArray*(numPresArray-1))/2);
        }
        cout<<ans<<endl;
    }
}