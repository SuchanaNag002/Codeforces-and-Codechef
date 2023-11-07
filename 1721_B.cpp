#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,n,m,sx,sy,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>sx>>sy>>d;
        if((n-sx)>d && (m-sy)>d)
            cout<<n+m-2<<endl;
        else
            cout<<"-1"<<endl;
    }
}