#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, x, n, r, s;
    cin >> t;
    while (t--)
    {
        cin>>n>>s>>r;
        x=r/(n-1);
        for(i=1;i<=n-2;i++)
            cout<<x<<" ";
        cout<<(r-(n-2)*x)<<" "<<s-r<<endl; 
    }
}