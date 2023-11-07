#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    ll n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n%4)==0)
        {
            for(i=0;i<n;i++)
                cout<<i+2<<" ";
        }
        else if((n%4)==1)
        {
            cout<<"0 ";
            for(i=1;i<n;i++)
                cout<<i+1<<" ";
        }
        else if((n%4)==2)
        {
            cout<<"2 3 1 4 12 8 ";
            for(i=6;i<n;i++)
                cout<<i+8<<" ";
        }
        else if((n%4)==3)
        {
            cout<<"2 1 3 ";
            for(i=3;i<n;i++)
                cout<<i+1<<" ";
        }
        cout<<endl;
    }
}