#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>a(n),b(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                f=1;
                break;
            }
            else if(a[i]!=b[i]&&(b[i]>(b[i+1]%n)+1))
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