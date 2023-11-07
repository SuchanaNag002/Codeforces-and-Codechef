#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, j, a, b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=1, b=2;
        vector<vector<ll>>mat(n,vector<ll>(n));   
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a<=n*n)
                {
                    mat[i][j]=a;
                    a+=2;
                }
                else
                {
                    mat[i][j]=b;
                    b+=2;
                }
            }
        } 
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
}