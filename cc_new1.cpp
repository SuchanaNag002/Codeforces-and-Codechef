#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, cnt, i, maxCount;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        unordered_set<int> st;
        cnt = maxCount = 0;
        for (i = 0; i < n; i++)
        {
            if (!st.count(arr[i]))
            {
                cnt++;
                st.insert(arr[i]);
            }
            else
            {
                cnt--;
                st.erase(arr[i]);
            }
            maxCount = max(maxCount, cnt);
        }
        cout << maxCount << endl;
    }
}