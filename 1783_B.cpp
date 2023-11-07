#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i,n,k,count;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<ll>arr(n);
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i!=0 && arr[i]==arr[i-1])
                count++;
        }
        if(count==n-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            sort(arr.begin(),arr.end());
            reverse(arr.begin(),arr.end());
            if(arr[0]==arr[1])
                swap(arr[0],arr[n-1]);
            for(auto it: arr)
                cout<<it<<" ";
            cout<<endl;
        }
    }
}
