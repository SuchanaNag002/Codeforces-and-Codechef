#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,lim,n,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n==1 || n==2)
            ans=1;
        else
        {
            ans=2;
            lim=2+x;
            while(max(lim,n)<=n)
            {
                if(n==lim)
                    break;
                ans++;
                lim=lim+x;
            }
        }
        cout<<ans<<endl;
    }
}