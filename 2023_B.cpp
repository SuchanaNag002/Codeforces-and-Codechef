#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        if(!(n&1))
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n;i++)
            {
                if(i&1)
                    cout<<"1 ";
                else
                    cout<<"-1 ";
            }
            cout<<endl;
        }
        else if(n==3)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n/2;i++)
                cout<<1-(n/2)<<" "<<(n/2)<<" ";
            cout<<1-(n/2)<<endl;
        }
    }
}