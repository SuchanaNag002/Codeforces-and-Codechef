#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, n, ans;
    cin >> t;
    while (t--)
    {
        cin>>n;
        ans=0;
        vector<ll> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<ll> a(n), b(n);
        a[0] = arr[0];
        for (i = 1; i < n; i++)
            a[i] = a[i - 1] + arr[i];
        b[n - 1] = arr[n - 1];
        for (i = n - 2; i >= 0; i--)
            b[i] = b[i + 1] + arr[i];
        for (i = 0; i < n - 1; i++)
            ans = max(ans, __gcd(a[i], b[i + 1]));
        cout << ans << endl;
    }
}
