#include<bits/stdc++.h>
using namespace std;
//to check if a solution exists for ax+by=c
int main()
{
    int a,b,c,gcd;
    cin>>a>>b>>c;
    gcd=__gcd(a,b);
    if(c%gcd==0)
        cout<<"Solution exists"<<endl;
    else
        cout<<"Solution does not exist"<<endl;
}