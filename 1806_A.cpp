#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, ans, a, b, c ,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(d<b)
            cout<<-1<<endl;
        else 
        {
            a=a+d-b;
            if(c>a)
                cout<<-1<<endl;
            else
            {
                ans=d-b;
                ans+=abs(a-c);
                cout<<ans<<endl;
            }
        }
    }
}