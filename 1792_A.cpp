#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, n, x, count1, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count1 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
                count1++;
        }
        ans = n - count1;
        if ((count1 & 1))
            ans += (count1 / 2) + 1;
        else
            ans += (count1 / 2);
        cout << ans << endl;
    }
}
