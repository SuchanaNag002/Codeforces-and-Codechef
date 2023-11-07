#include<bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(2*l<=r)
            cout<<l<<" "<<2*l<<endl;
        else
            cout<<"-1 -1"<<endl;
    }
}