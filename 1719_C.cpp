#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bs(ll l, ll h, vector<ll> wins[], ll k, ll i)
{
    if (l <= h)
    {
        ll m = (l + h) / 2;

        if (wins[i][m] <= k)
        {
            if (m + 1 <= h)
            {
                if (wins[i][m + 1] <= k)
                {
                    return bs(m + 1, h, wins, k, i);
                }
                else
                {
                    return m + 1;
                }
            }
            else
            {
                return m + 1;
            }
        }
        else
        {
            return bs(l, m - 1, wins, k, i);
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, k, i, j, q, k1, winner;

    cin >> t;

    while (t--)
    {
        cin >> n >> q;

        ll a[n + 1], si[n + 1];

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            si[i] = 0;
            if (a[i] == n)
            {
                k1 = i - 1;
            }
        }

        if (k1 == 0)
            k1 = 1;

        vector<ll> wins[n + 1];

        if (a[1] > a[2])
        {
            winner = 1;
        }
        else
        {
            winner = 2;
        }

        if (k1 > 1)
        {
            wins[winner].push_back(1);
            si[winner]++;
        }

        for (i = 2; i < k1; i++)
        {
            if (a[i + 1] > a[winner])
            {
                winner = i + 1;
            }
            si[winner]++;
            wins[winner].push_back(i);
        }

        for (; q--;)
        {
            cin >> i >> k;

            if (k >= k1)
            {
                j = bs(0, si[i] - 1, wins, k1 - 1, i);
                if (a[i] == n)
                {
                    j = j + k - k1 + 1;
                }
            }
            else
            {
                j = bs(0, si[i] - 1, wins, k, i);
            }
            cout << j << "\n";
        }
    }
}