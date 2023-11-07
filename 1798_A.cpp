#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, a, b, ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=1;
        for(i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(i==1)
                ans=a*b;
            else
                ans=__gcd(ans,a*b);
        }
    }
    cout<<ans<<endl;
}