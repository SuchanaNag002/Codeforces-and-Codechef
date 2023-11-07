#include<bits/stdc++.h>
#define ll long long
#define inf 1000000007
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        unordered_map<char,ll>idx;
        vector<ll>dp(n+1,inf);
        dp[0]=0;
        //dp[i+1]=minimum moves requires to make s1 to si even
        for(i=0;i<n;i++)
        {
            if(idx.find(s[i])!=idx.end())//char is present
                dp[i+1]=min(dp[i+1],dp[idx[s[i]]]+i-idx[s[i]]-1);
            dp[i+1]=min(dp[i+1],dp[i]+1);//if i remove character itself 
            idx[s[i]]=i;
        }
        cout<<dp[n]<<endl;
    }
}