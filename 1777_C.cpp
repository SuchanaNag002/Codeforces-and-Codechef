#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, j, n, m, ans, res;
    cout << "Hello";
    vector<ll> factors[100001];
    for (i = 1; i <= 100000; i++)
    {
        for (j = i; j <= 100000; j += i)
        {
            factors[j].push_back(i);
        }
    }
    cout << "Hello";
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<ll> arr(n), count(m + 1);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        ans = 0, res = 100000;
        for (i = 0; i < n; i++)
        {
            j = 0;
            while (j < n && ans < m)
            {
                for (auto factor : factors[arr[i]])
                {
                    if (factor > m)
                        break;
                    count[factor]++;
                    if (count[factor] == 1)
                        ans++;
                }
                j++;
            }
            if (ans == m)
                res = min(res, arr[j - 1] - arr[i]);
            for (auto factor : factors[arr[i]])
            {
                if (factor > m)
                    break;
                count[factor]--;
                if (count[factor] == 0)
                    ans--;
            }
        }
        if (res == 100000)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
}