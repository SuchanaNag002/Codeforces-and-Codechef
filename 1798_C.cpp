#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, ans, gcd, lcm, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>a(n),b(n);
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        ans=lcm=1;
        gcd=0;
        for(i=0;i<n;i++)
        {
            gcd=__gcd(gcd,a[i]*b[i]);
            lcm=lcm*b[i]/__gcd(lcm,b[i]);
            if(gcd%lcm!=0)
            {
                ans++;
                gcd=a[i]*b[i];
                lcm=b[i];
            }
        }
        cout<<ans<<endl;
    }
}