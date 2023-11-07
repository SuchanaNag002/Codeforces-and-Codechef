#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, f, minval, minind, cnt1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        vector<pair<int, int>> ind;
        cnt1 = f = 0;
        minval = INT_MAX;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < minval)
            {
                minval = arr[i];
                minind = i;
            }
            ind.push_back({arr[i], i});
            if (i > 0 && arr[i] != arr[i - 1])
                f = 1;
            if (arr[i] == 1)
                cnt1++;
        }
        if (f == 0)
            cout << 0 << endl;
        else if (cnt1 > 0)
            cout << -1 << endl;
        else
        {
            vector<pair<int, int>> ans;
            for (i = 0; i < n; i++)
            {
                if ((ind[i].first % minval) != 0) // found my first 2 in ind[i].second position that is ultimate j
                {
                    while (ind[i].first != 2)
                    {
                        cout<<9000000<<endl;
                        ans.push_back({ind[i].second + 1, minind + 1});
                        ind[i].first = (ind[i].first + minval - 1) / minval;
                    }
                    break;
                }
            }
            if (minval != 2)
            {
                while (ind[minind].first != 2)
                {
                    ans.push_back({minind + 1, i + 1});
                    ind[minind].first = (ind[minind].first + 1) / 2;
                }
            }
            for (i = 0; i < n; i++)
            {
                while (ind[i].first != 2)
                {
                    ans.push_back({ind[i].second + 1, minind + 1});
                    ind[i].first = ((ind[i].first) + 1) / 2;
                }
            }
            cout << ans.size() << endl;
            for (auto it : ans)
                cout << it.first << " " << it.second << endl;
        }
    }
}