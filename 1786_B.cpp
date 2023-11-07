#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, x, n, w, h, shift;
    bool ok, moveR, moveL;
    cin >> t;
    while (t--)
    {
        cin >> n >> w >> h;
        vector<vector<ll>>cake(n),dis(n);
        for (i = 0; i < n; i++)
        {
            cin >> x;
            cake[i]={x - w, x + w};
        }
        for (i = 0; i < n; i++)
        {
            cin >> x;
            dis[i]={x - h, x + h};
        }
        ok = true;
        moveL=moveR=false;
        for (i = 0; i < n; i++)
        {
            if (!(dis[i][0] >= cake[i][0] && dis[i][1] <= cake[i][1]))
                ok = false;
            if (dis[i][0] < cake[i][0])
                moveL = true;
            if (dis[i][1] > cake[i][1])
                moveR = true;
        }
        if (ok)
        {
            cout << "YES" << endl;
            continue;
        }
        if (moveR && moveL)
        {
            cout << "NO" << endl;
            continue;
        }
        if (moveL)
        {
            shift = 0;
            for (i = 0; i < n; i++)
                if (dis[i][0] < cake[i][0])
                    shift = max(shift, cake[i][0] - dis[i][0]);
            ok = true;
            for (i = 0; i < n; i++)
            {
                cake[i][0] -= shift;
                cake[i][1] -= shift;
                if (!(dis[i][0] >= cake[i][0] && dis[i][1] <= cake[i][1]))
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            shift = 0;
            for (i = 0; i < n; i++)
                if (cake[i][1] < dis[i][1])
                    shift = max(shift, dis[i][1] - cake[i][1]);
            ok = true;
            for (i = 0; i < n; i++)
            {
                cake[i][0] += shift;
                cake[i][1] += shift;
                if (!(dis[i][0] >= cake[i][0] && dis[i][1] <= cake[i][1]))
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}