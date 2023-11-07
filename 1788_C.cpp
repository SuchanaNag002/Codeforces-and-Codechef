#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,a,b,add,sub,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(!(n&1))
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            a=1;
            b=(3*((n+1)/2))-a;
            sub=n/2;
            add=n-sub;
            f=1;
            for(i=1;i<=n;i++)
            {
                if(f)
                {
                    cout<<a<<" "<<b<<endl;
                    a+=add;
                    b-=sub;
                    f=0;
                }
                else
                {
                    cout<<a<<" "<<b<<endl;
                    a-=sub;
                    b+=add;
                    f=1;
                }
            }
        }
    }
}