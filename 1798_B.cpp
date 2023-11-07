#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, m, x, j, f ;
    cin>>t;
    while(t--)
    {
        cin>>m;
        unordered_map<int,int>mpp;
        for(i=0;i<m;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>x;
                mpp[x]=i;
            }
        }
        vector<int>res(m,-1);
        for(auto it:mpp)
            if(it.second<m)
                res[it.second]=it.first;
        f=0;
        for(i=0;i<m;i++)
        {
            if(res[i]==-1)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for(i=0;i<m;i++)
                cout<<res[i]<<" ";
        }
        else
            cout<<-1;
        cout<<endl;
    }
}