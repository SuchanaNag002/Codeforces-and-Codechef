#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
bool check(vector<int> arr)
{
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,mini,minind,f;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n+1),actual(n+1);
        for (i = 1; i<=n; i++)
        {
            cin >> arr[i];
            actual[i]=arr[i];
        }
        if (check(arr))
        {
            cout << 0 << endl;
            continue;
        }
        vector<vector<int>> ans;
        while (!check(arr))
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
            for (i = 1; i <=n; i++)
            {
                
            }
            if (arr == actual)
            {
                cout<<-1<<endl;
                continue;
            }
            actual = arr;
        }
        cout << ans.size() << endl;
        for (auto it : ans)
            cout << it[0]  << " " << it[1] << endl;
    }
}
