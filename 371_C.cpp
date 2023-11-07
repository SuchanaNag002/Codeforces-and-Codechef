#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll ns=0,nb=0,nc=0,i,r,mid,qb,qs,qc,pb,ps,pc,qbb,qcc,qss;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            nb++;
        else if(s[i]=='C')
            nc++;
        else
            ns++;
    }
    cin>>qb>>qs>>qc;//no. of quantities already given
    cin>>pb>>ps>>pc;
    cin>>r;
    ll l=0,h=r+100;
    while(l<=h)
    {
        mid=l+(h-l)/2;//denotes the number of hamburgers
        ll z=0;
        qbb=max(nb*mid-qb,z);//updated quantities
        qss=max(ns*mid-qs,z);
        qcc=max(nc*mid-qc,z);
        if((qbb*pb+qss*ps+qcc*pc)<=r)
            l=mid+1;
        else
            h=mid-1;
    }
    cout<<h<<endl;
}
