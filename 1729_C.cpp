#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,j,cost,f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        vector<ll>index[26];
        vector<ll>ans;
        for(i=0;i<n;i++)
            index[s[i]-97].push_back(i+1);
        cost=abs(s[0]-s[n-1]);
        if(s[n-1]>s[0])
        {
            for(i=s[0]-97;i<=s[n-1]-97;i++)
            {
                f=index[i].size();//frequency of a character
                for(j=0;j<f;j++)
                    ans.push_back(index[i][j]);   
            }
        }
        else
        {
            for(i=s[0]-97;i>=s[n-1]-97;i--)
            {
                f=index[i].size();//frequency of a character
                for(j=0;j<f;j++)
                    ans.push_back(index[i][j]);   
            }
        }
        cout<<cost<<" "<<ans.size()<<endl;
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}