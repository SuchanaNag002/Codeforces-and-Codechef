#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,n,m,x,y,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>x>>y;
        if(n>m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}