#include<bits/stdc++.h>
#define ll long long
# define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,l,r,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        if(a==b)
            cout<<0<<endl;
        else if(b-a>=x)
            cout<<1<<endl;
        else if((r-b)>=x || (a-l)>=x)
            cout<<2<<endl;
        else if((r-a)>=x && (b-l)>=x)
            cout<<3<<endl;
        else
            cout<<-1<<endl;
    }
}