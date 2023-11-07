#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,q,i,pq;
    string s;
    cin>>t;
    while(t--)
    {
        s="";
        cin>>n>>q;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        pq=0;//present iq
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]<=pq)
                s=s+"1";
            else if(pq<q)
            {
                s=s+"1";
                pq++;
            }
            else
                s=s+"0";
        }
        cout<<s<<endl;
    }
}