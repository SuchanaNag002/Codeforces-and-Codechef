#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, m, n, i, j, count;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        vector<vector<ll>>mat(m+1,vector<ll>(n+1));
        cout<<m*n<<endl;
        for(i=1;i<=m;i++)
            mat[i][1]=i;
        for(i=1;i<=m;i++)
            for(j=2;j<=n;j++)
                mat[i][j]=mat[i][j-1]+256;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
}