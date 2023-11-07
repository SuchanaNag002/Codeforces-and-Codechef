#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, last, n, i,ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ans=0;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        last = -1;
        for (i = n - 2; i >= 0; i--)
        {
            if (arr[i] > arr[i + 1])
            {
                last = i;
                break;
            }
        }
        if (last == -1)
        {
            cout << "0" << endl;
            continue;
        }
        vector<bool>check(n+1,false);
        for(i=0;i<=last;i++)
            check[arr[i]]=true;
        for(i=last+1;i<n;i++)
        {
            if(check[arr[i]]==true)
                last=i;
        }
        for(i=last;i>=0;i--)
            check[arr[i]]=true;
        for(i=1;i<=n;i++)
            if(check[i]==true)
                ans++;
        cout<<ans<<endl;
    }
}