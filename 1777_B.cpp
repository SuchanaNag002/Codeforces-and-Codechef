#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ll t, n, c0, c1, ans, po, pz, sw, sd, curr, i;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = s.size(), c0 = 0, c1 = 0;

        for (i = 0; i < n; ++i)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }
        po = 0, pz = 0, sw = 1e12, sd = 1e12 + 1;
        ans = sd * (min(c0, c1));

        for (i = 0; i < n; ++i)
        {
            if (s[i] == '0')
                pz++;
            else
                po++;

            curr = 0;
            curr = po * sd + min((c0 - pz) * sd, (c1 - po) * sd);
            ans = min(ans, curr);
            if (s[i] == '1' && i < n - 1 && s[i + 1] == '0')
            {
                curr = (po - 1) * sd + min((c0 - pz - 1) * sd, (c1 - po + 1) * sd) + sw;
                ans = min(curr, ans);
            } 
        }
        cout << ans << endl;
    }
}
