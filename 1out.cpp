#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,ans,dig,fd,i,mul;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=10)
            ans=n;
        else
        {
            dig=0,fd,mul=1;
            while(n)
            {
                fd=n%10;
                dig++;//number of digits;
                n/=10;
            }
            for(i=1;i<dig;i++)
            {
                mul=mul*10; 
                fd=fd*10;
            }   
            ans=9*(dig-1)+(fd/mul);
        }
        cout<<ans<<endl;
    }
}