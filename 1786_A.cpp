#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n,a,b,count,check;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=b=check=0;
        count=1;
        while(true)
        {
            if(!check)
            {
                if(count<n)
                    a+=count;
                else
                {
                    a+=n;
                    break;
                }
                check=1;
            }
            else
            {
                if(count<n)
                    b+=count;
                else
                {
                    b+=n;
                    break;
                }
                check=0;
            }
            n-=count;
            count+=4;
        }
        cout<<a<<" "<<b<<endl;
    }
}