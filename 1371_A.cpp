#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1)
            cout<<((n/2)+1)<<endl;
        else
            cout<<(n/2)<<endl;
    }
}