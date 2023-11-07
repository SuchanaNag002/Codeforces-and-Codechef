#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, m, n, res;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        res = __gcd(m, n);
        res = m / res;
        if (m == n)
            cout << "YES" << endl;
        else if (m > n && !(m & 1) && (res & (res - 1)) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}