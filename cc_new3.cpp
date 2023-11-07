#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int calcOperations(int curr, int req)
{
    int m1 = curr%3;
    int m2 = req;
    if(m1 == m2)
        return 0;
    else if(m2>m1)
        return m2-m1;
    else
        return m2+3-m1;
}
int calc(vector<int>&temp)
{
    int ans = 0, i, numOfOperations;
    for(i=3; i<temp.size();i++)
    {
        numOfOperations = calcOperations(temp[i], temp[i-3]);
        ans += numOfOperations;
        temp[i] = temp[i-3];
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, j, k, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<vector<int>> x;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                for (k = 0; k < 3; k++)
                    if ((i + j + k) % 3 == 0)
                        x.push_back({i, j, k});
        ans = INT_MAX;
        for (auto vec : x)
        {
            vector<int>temp = vec;
            for (auto it : arr)
                temp.push_back(it);
            ans = min(ans, calc(temp));
        }
        cout<<ans<<endl;
    }
}