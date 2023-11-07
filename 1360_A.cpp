#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,a,b,res;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        (a<b)?a*=2:b*=2;
        res=max(a,b)*max(a,b);
        cout<<res<<endl;
    }
}