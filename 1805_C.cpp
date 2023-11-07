#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, m, a, b, c, l, h, mid, f, i, val;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<ll> k(n);
        for (i = 0; i < n; i++)
            cin >> k[i];
        sort(k.begin(), k.end());
        for (i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            f = 0;
            l = 0, h = n - 1;
            while (l <= h)
            {
                mid = l + (h - l) / 2;
                val = (b - k[mid]) * (b - k[mid]) - 4 * a * c;
                if (val < 0)
                {
                    f = 1;
                    break;
                }
                else
                {
                    if (b < k[mid])
                        h = mid - 1;
                    else
                        l = mid + 1;
                }
            }
            if (f == 0)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                cout << k[mid] << endl;
            }
        }
        cout << endl;
    }
}
