#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, l, r, ans, size;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        size=1;
        while((l<<size)<=r)
            size++;
        ans=(r/(1<<(size-1))-l+1);
        if(size)
            ans+=(size-1)*max(0LL,(r/(1<<(size-2))/3-l+1));
        cout<<size<<" "<<ans<<endl;
    }
}