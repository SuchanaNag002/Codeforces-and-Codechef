#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, j, c;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<vector<int>>mat(3,vector<int>(n+1,0));
        mat[1][1]=2*n-1;
        mat[2][n]=2*n;
        c=n+2;
        for(j=2;j<=n;j++)
        {
            if(j&1)
            {
                mat[1][j]=c;
                c+=2;
            }
            else
                mat[1][j]=j;
        }
        c=n+1;
        for(j=1;j<=n-1;j++)
        {
            if(j&1)
                mat[2][j]=j;
            else
            {
                mat[2][j]=c;
                c+=2;
            }
        }
        for(i=1;i<=2;i++)
        {
            for(j=1;j<=n;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
}