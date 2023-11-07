#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll t,n,f,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unordered_map<ll,ll>mpp;
        f=0;
        for(i=1;i<=2*n;i++)
        {
            cin>>x;
            mpp[x]++;
        }
        for(auto it:mpp)
        {
            if(it.second>2)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}