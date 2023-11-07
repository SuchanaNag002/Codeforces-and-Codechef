#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, x, y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==y)
        {
            if(x&1)
                cout<<"CHEF"<<endl;
            else
                cout<<"CHEFINA"<<endl;
        }
        else if(x>y)
        {
            if(x-y>=2)
                cout<<"CHEF"<<endl;
            else
            {
                if(y&1)
                    cout<<"CHEF"<<endl;
                else
                    cout<<"CHEFINA"<<endl;
            }
        }
        else
        {
            if(y-x>=2)
                cout<<"CHEFINA"<<endl;
            else
            {
                if(y&1)
                    cout<<"CHEFINA"<<endl;
                else
                    cout<<"CHEF"<<endl;
            }
        }
    }
}