#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,n,min_a,min_b,a,b;
    cin>>t;
    while(t--)
    {
        min_a=min_b=INT_MAX;
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
            min_a=min(min_a,a);
            min_b=min(min_b,b);
        }
        cout<<(min(min_a,min_b))+1<<endl;
    }
}