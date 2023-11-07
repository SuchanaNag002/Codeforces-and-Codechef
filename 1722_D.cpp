#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
void binarySearch(ll low, ll high, vector<ll>&arr, ll n,ll &x)
{
    ll i,f=0,mid;
    if(low<=high)
    {
        mid = low+(high-low)/2;
        for(i=0;i<n-1;i++)
        {
            if(abs(arr[i]-mid)>abs(arr[i+1]-mid))
            {
                if(arr[i]>arr[i+1])
                    f=1;
                else
                    f=2;
                break;
            }
        }
        if(f==1)
            binarySearch(mid+1,high,arr,n,x);
        else if(f==2)
            binarySearch(low,mid-1,arr,n,x);
        else
            x=mid;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i, t, n, x;
    cin >> t;
    while (t--)
    {
        cin >>n;
        vector<ll>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        x=-1;
        binarySearch(0,1000000000,arr,n,x);
        cout<<x<<endl;
    }
}