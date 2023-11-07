#include<bits/stdc++.h>
#define long long double
using namespace std;
int main()
{
    int n,a,b;
    double res;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        res=cbrt(a*b);
        if(floor(res)==ceil(res))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}