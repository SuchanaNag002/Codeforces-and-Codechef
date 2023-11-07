#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,ans;
    string s;
    cin >> t;
    while (t--)
    {
        cin>>n;
        cin>>s;
        ans=-1;
        for(i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                if(s[i]=='L' && s[i+1]=='R')
                    ans=i+1;
                else
                    ans=0;
                break;
            }
        }
       cout<<ans<<endl;
    }
}