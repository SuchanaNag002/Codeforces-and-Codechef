#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, ans ;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=sqrtl(n);
        if(ceil(sqrtl(n))==floor(sqrtl(n)))
            cout<<ans-1<<endl;
        else
            cout<<ans<<endl;
    }
}