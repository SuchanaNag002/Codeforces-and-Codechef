#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int t,a,b,count,i,n;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>a>>b;
        n=abs(a-b);
        for(i=10;i>=1;i--)
        {
            if(n==0)
                break;
            else if(n<i)
                continue;
            else
            {
                count+=n/i;
                n=n-count*i;
            }
        }
        cout<<count<<endl;
    }
}