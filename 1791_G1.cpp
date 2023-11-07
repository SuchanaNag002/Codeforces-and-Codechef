#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, c, i, x, ans;
    cin >> t;
    while (t--)
    {
        cin>>n>>c;
        vector<ll>arr(n+1,0);
        for(i=1;i<=n;i++)
        {
            cin>>x;
            arr[i]=i+x;
        }
        sort(arr.begin(),arr.end());
        ans=0;
        for(i=1;i<=n;i++)
        {
            if(arr[i]<=c)
            {
                ans++;
                c-=arr[i];
            }
            else
                break;
        }
        cout<<ans<<endl;
    }
}