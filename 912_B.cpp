#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,ans=1;
    cin>>n>>k;
    if(k==1)
        cout<<n<<endl;
    else
    {
        while(ans<n)
            ans=2*ans+1;
        cout<<ans<<endl;
    }
}