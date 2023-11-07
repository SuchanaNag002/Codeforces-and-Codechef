#include<bits/stdc++.h>
using namespace std;
//ax+by=n
//y=(n-ax)/b
//at first check if solution exists or not from diophantine_equan.cpp here in this directory
int main()
{
    int a,b,n,i;
    cout<<"Enter a,b,n: ";
    cin>>a>>b>>n;
    for(i=0;i*a<=n;i++)
    {
        if(((n-a*i)%b)==0)
            cout<<"("<<i<<","<<((n-a*i)/b)<<")"<<endl;   
    }
}