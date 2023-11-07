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
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<int>arr(n+1,0),res(n+1,1);
        for(i=1;i<=n;i++)
            cin>>arr[i];
        for(i=1;i<=n;i++)
            res[n-arr[i]]=i;
        for(i=1;i<=n;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
}