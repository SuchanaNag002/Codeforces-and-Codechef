#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, m, i, j, ans, x, cnt;
    cin >> t;
    while (t--)
    {
        cin>>n>>m;
        vector<vector<ll>>vec(m);  
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>x;
                vec[j].push_back(x);
            }
        }
        for(j=0;j<m;j++)
            sort(vec[j].begin(),vec[j].end());
        ans=0;
        for(i=0;i<m;i++)
        {
            vector<ll>res(n,0);
            res[n-1]=vec[i][n-1];
            for(j=n-2;j>=0;j--)
                res[j]=res[j+1]+vec[i][j];
            for(j=0;j<n-1;j++)
            {
                cnt=res[j+1]-(n-j-1)*vec[i][j];
                ans+=cnt;
            }
        }
        cout<<ans<<endl;
    }
}