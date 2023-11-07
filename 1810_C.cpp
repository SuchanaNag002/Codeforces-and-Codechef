#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, c, d, i, ans, toDel, add, missing;
    cin >> t;
    while (t--)
    {
        cin>>n>>c>>d;
        vector<ll>arr(n);
        for(i=0; i<n; i++)
            cin>>arr[i];
        ans=0;
        sort(arr.begin(),arr.end());
        if(arr[0]!=1)
        {
            ans+=d;
            arr.insert(arr.begin()+0, 1);
            n++;
        }
        arr.erase(unique(arr.begin(),arr.end()),arr.end());
        toDel=n-(ll)arr.size();
        n=arr.size();
        ans+=(c*toDel);
        add=LLONG_MAX;
        for(i=0;i<n;i++)
        {
            missing=arr[i]-(i+1);
            add=min(add,(c*(n-i-1))+(d*missing));
        }
        ans+=add;
        cout<<ans<<endl;
    }
}