#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, j, n, a, b, f;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<ll>> vec(n, vector<ll>(n - 1));
        a = b = -1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n - 1; j++)
                cin >> vec[i][j];
        for (i = 0; i < n; i++)
        {
            f = 0;
            for (j = 0; j < n; j++)
            {
                if (vec[i][1] == vec[j][0])
                {
                    a = i;
                    b = j;
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }
        cout << vec[a][0] << " ";
        for (i = 0; i < n - 1; i++)
            cout << vec[b][i] << " ";
        cout << endl;
    }
}