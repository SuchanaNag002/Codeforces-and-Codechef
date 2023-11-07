#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, a, b, c, d, x, y, a1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(((a+1)%b)==((c+1)%d))
            cout<<1<<endl;
        else
        {
            x=a%b;
            a1=a-x;
            y=(b*d)/__gcd(b,d);
            cout<<y+a1-a<<endl;
        }
    }
}