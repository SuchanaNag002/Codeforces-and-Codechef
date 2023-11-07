#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool solve()
{
    ll n,i,f=0;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}