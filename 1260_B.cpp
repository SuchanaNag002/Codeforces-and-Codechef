#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if((a+b)%3==0 &&(a<=2*b && b<=2*a))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}