#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,i,count,a,x;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>a;
        for(i=1;i<=3;i++)
        {
            cin>>x;
            if(x>a)
                count++;
        }
        cout<<count<<endl;
    }
}