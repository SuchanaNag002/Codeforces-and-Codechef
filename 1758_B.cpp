#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1)
        {
            for(i=1;i<=n;i++)
                cout<<n<<" ";
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i==1)
                    cout<<1<<" ";
                else if(i==2)
                    cout<<3<<" ";
                else
                    cout<<2<<" ";
            }
        }
        cout<<endl;
    }
}