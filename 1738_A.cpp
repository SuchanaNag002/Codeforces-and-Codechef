#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool solve()
{
    ll n,i,low,high,m,n;
    cin>>n;
    vector<int>a(n),b(n),count1,count2;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            count1.push_back(b[i]);
        else
            count2.push_back(b[i]);
    }
    m=count1.size();
    n=count2.size();
    if(m==n)
    {
        if(count1[0]<=count2[n-1])


    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}