#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,a,b,c,n,tot;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        tot=a+b+c+n;
        if((tot%3)!=0 || a>(tot/3) || b>(tot/3) || c>(tot/3))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}