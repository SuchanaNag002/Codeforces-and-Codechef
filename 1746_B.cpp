#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,gcd,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        gcd=arr[0];
        for(i=0;i<n;i++)
            gcd=__gcd(gcd,arr[i]);
        cout<<arr[n-1]/gcd<<endl;
    }
}