#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,k,b,s,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>b>>s;
        vector<ll>a;
        a[0]=b*k;
        if(s<a[0]||s>(a[0]+(k-1)*n))
            cout<<"-1";
        else
        {
            s=s-a[0];
            for(i=0;i<n;i++)
            {
                    ll val=min(s,k-1);
                    a[i]=a[i]+val;
                    s=s-val;
            }
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}