#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int t,a,b,sum,i,f;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sum=a+b;
        f=0;
        for(i=2;i<=sqrt(sum);i++)
        {
            if((sum%i)==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"ALICE"<<endl;
        else
            cout<<"BOB"<<endl;
    }
}