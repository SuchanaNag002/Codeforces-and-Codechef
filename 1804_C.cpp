#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, x, p, f;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>p;
        f=0;
        for(i=1; i<=min(2*n,p); i++)
        {
            if((x+(i*(i+1))/2)%n==0)
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;  
    }
}