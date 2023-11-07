#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, x, ans, known, unknown, known1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        known=known1=unknown=ans=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==1)
                unknown++;
            else
            {
                known+=unknown;
                unknown=0;
            }
            if(known>0)
                known1=known/2 + 1;
            //cout<<unknown<<" "<<known1<<endl;
            ans=max(ans,known1+unknown);
        }
        cout<<ans<<endl;
    }
}