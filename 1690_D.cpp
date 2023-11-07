#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n,i,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        vector<int>white(n+1,0);
        for(i=1;i<=n;i++)
        {
            if(s[i-1]=='W')
                white[i]=white[i-1]+1;
            else
                white[i]=white[i-1];
        }
        ans=INT_MAX;
        for(i=k;i<=n;i++)
            ans=min(ans,white[i]-white[i-k]);//since we are checking for k segments only
        cout<<ans<<endl;
    }
}