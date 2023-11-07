#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i;
    ll sum;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> arr(n);
        sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        cout<< sum <<" ";
        for(i=0; i<n-1; i++)
        {
            sum -= arr[i];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}