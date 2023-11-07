#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, i, p, q;
    cin >> n >> m;
    vector<ll> arr(n + 1);
    vector<ll> dp1(n+1,0),dp2(n+1,0);
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    for (i = 2; i <=n; i++)
    {
        if (arr[i] < arr[i - 1])
            dp1[i] = dp1[i-1]+arr[i-1]-arr[i];
        else
            dp1[i]=dp1[i-1];
    }
    for (i = n-1; i >=1; i--)
    {
        if (arr[i+1] > arr[i])
            dp2[i] = dp2[i+1]+arr[i+1]-arr[i];
        else
            dp2[i]=dp2[i+1];
    }
    while (m--)
    {
        cin >> p >> q;
        if(p<=q)
            cout<<dp1[q]-dp1[p]<<endl;
        else
            cout<<dp2[q]-dp2[p]<<endl;
    }
}