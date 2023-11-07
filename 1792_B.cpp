#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, a1, a2, a3, a4, ans;
    cin >> t;
    while (t--)
    {
        cin>>a1>>a2>>a3>>a4;
        if(a1==0)
        {
            if(a2>0 || a3>0 || a4>0)
                cout<<1<<endl;
            else
                cout<<0<<endl;
            continue;
        }
        ans=a1;
        if(a2>a3)
            swap(a2,a3);
        ans+=2*a2;
        a3=a3-a2;
        ans+=min(a1+1,a3+a4);
        cout<<ans<<endl;
    }
}
