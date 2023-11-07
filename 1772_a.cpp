#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
bool ifSame(vector<int> arr)
{
    int i;
    for (i = 2; i <arr.size(); i++)
    {
        if (arr[i-1] != arr[i])
            return false;
    }
    return true;
}

void solve()
{
    int n,i,minind,mini,y;
    cin >> n;
    vector<int> arr(n+1),actual(n+1);
    for (i = 1; i <=n; i++)
    {
        cin >> arr[i];
        actual[i]=arr[i];
    }
    if (ifSame(arr))
    {
        cout << 0 << endl;
        return;
    }
    vector<vector<int>> ans;
    while (!ifSame(arr))
    {
        mini = INT_MAX;
        for (i = 1; i <=n; i++)
        {
            if (arr[i] < mini)
            {
                mini = arr[i];
                minind = i;
            }
        }
        for (i=1; i <=n; i++)
        {
            if (arr[i] > mini)
            {
                ans.push_back({i, minind});
                arr[i] = (arr[i]+mini-1)/mini;
            }
        }
        if (arr == actual)
        {
            cout << -1 << endl;
            return;
        }
        actual = arr;
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it[0] << " " << it[1]<< endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}