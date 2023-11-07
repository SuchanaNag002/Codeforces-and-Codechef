#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool is_sorted(vector<ll>&a)
{
    for(ll i=1;i<a.size();i++)
    {
        if(a[i-1]>a[i])
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<ll>a(n);
        for(i=0; i<n ;i++)
            cin>>a[i];
        for(i=1;i<=n-2;i++)
        {
            if(a[i-1]>a[i])
            {
                a[i+1]+=(a[i-1]-a[i]);
                a[i]=a[i-1];
            }
        }
        for(i=n-2;i>=1;i--)
        {
            if(a[i]>a[i+1])
            {
                a[i-1]-=(a[i]-a[i+1]);
                a[i]=a[i+1];
            }
        }
        if(is_sorted(a))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}