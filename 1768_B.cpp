#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i,n,k,count1,count2,factor,x;
    cin >> t;
    while (t--)
    {
        cin>>n>>k;
        count1=0;
        count2=1;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x==count2)
            {
                count1++;
                count2++;
            }
        }
        factor=n-count1;
        if(!(factor%k))
            cout<<factor/k<<endl;
        else
            cout<<factor/k+1<<endl;
    }
}
