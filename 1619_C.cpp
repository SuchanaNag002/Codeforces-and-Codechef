#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,k,i,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        ans=0;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                if(n-i-1<=k)
                {
                    k-=(n-i-1);
                    swap(s[n-1],s[i]);
                }
                break;
            }
        }
        for(i=0;i<=n-2;i++)
        {
            if(s[i]=='1')
            {
                if(i<=k)
                    swap(s[0],s[i]);
                break;
            }
        }
        for(i=0;i<=n-2;i++)
        {
            string sub=s.substr(i,2);
            ans=ans+stoi(sub);
        }
        cout<<ans<<endl;
    }
}