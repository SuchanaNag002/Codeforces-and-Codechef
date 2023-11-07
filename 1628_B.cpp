#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,ans,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0,flag=0;
        vector<int>arr(n+1);
        for(i=1;i<=n;i++)
            cin>>arr[i];
        for(i=1;i<=n;i++)
        {
            if(arr[i]!=i-1)
            {
                if(flag==0)
                {
                    ans=arr[i];
                    flag=1;
                }
                else
                    ans=ans&arr[i];
            }
        }
        cout<<ans<<endl;
    }
}