#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, count, i, x, n , m, len;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<ll>res(n+1,-1);
        len=n;
        vector<ll>arr(m+1);
        vector<ll>vis(m+n+1,-1);
        for(i=1;i<=m;i++)
            cin>>arr[i];
        count=1;
        for(i=1;i<=m;i++)
        {
            if(vis[arr[i]]==-1)
            {
                res[n]=count;
                vis[arr[i]]=1;
                n--;
            }
            if(n==0)
                break;
            count++;
        }
        for(i=1;i<=len;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
}