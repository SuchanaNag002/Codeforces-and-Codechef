#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,x,y,diff,i,l,r;
    cin>>t;
    string s1,s2;
    while(t--)
    {
        diff=0;
        cin>>n>>x>>y>>s1>>s2;
        for(i=0;i<n;i++)
        {
            s1[i]=s1[i]^s2[i];
            cout<<s1[i]<<" ";
            diff=diff+s1[i];
        }
        if(diff&1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else if(diff==2)
        {
            l=0,r=n-1;
            while(s1[l]!=1)
                l++;
            while(s1[r]!=1)
                r--;
            if(l+1==r)
                cout<<min(x,2*y)<<endl;
            else
                cout<<min((r-l)*x,y)<<endl;
        }
        else
            cout<<(diff/2)*y<<endl;
    }
}