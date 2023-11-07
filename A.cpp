#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, l, r, i, maxi, mini, ans, diff, n, d;
    cin >> t;
    while (t--)
    {
        cin>>l>>r;
        diff=-1;
        for(i=l;i<=r;i++)
        {
            n=i;
            maxi=0,mini=1e7;
            while(n)
            {
                d=n%10;
                maxi=max(maxi,d);
                mini=min(mini,d);
                n=n/10;
            }
            if(maxi-mini==9)
            {
                ans=i;
                break;
            }
            if(maxi-mini>diff)
            {
                diff=maxi-mini;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
}