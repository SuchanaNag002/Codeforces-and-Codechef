#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,i,x,sum=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%k==0)
            sum+=(x/k);
        else
           sum+=(x/k)+1;
    } 
    cout<<(sum+1)/2<<endl;
}