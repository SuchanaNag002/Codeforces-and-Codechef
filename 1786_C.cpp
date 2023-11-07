#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i,n,ans,num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>arr(n);
        ans=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        num=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]>=num)
            {
                ans+=(arr[i]-num);
                num++;
            }
        }
        cout<<ans<<endl;
    }
}