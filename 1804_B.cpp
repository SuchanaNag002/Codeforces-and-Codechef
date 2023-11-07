#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, k, d, w, ans, f, val;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d>>w;
        vector<ll>arr(n);
        val=1,ans=f=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            if(f==0 || val<=arr[i])
            {
                f=k-1;
                val=arr[i]+w+d+1;
                ans+=1;
            }
            else
                f--;
        }
        cout<<ans<<endl;
    }
}