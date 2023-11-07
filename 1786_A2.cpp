#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n,a,b,count,check,bb,bw,ab,aw;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=b=bb=bw=ab=aw=check=0;
        count=1;
        while(true)
        {
            if(!check)
            {
                if(count<n)
                {
                    ab+=(count/2);
                    aw+=(count-count/2);
                }
                else
                {
                    ab+=(n/2);
                    aw+=(n-n/2);
                    break;
                }
                check=1;
            }
            else
            {
                if(count<n)
                {
                    bw+=(count/2);
                    bb+=(count-count/2);
                }
                else
                {
                    bw+=(n/2);
                    bb+=(n-n/2);
                    break;
                }
                check=0;
            }
            n-=count;
            count+=4;
        }
        cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
    }
}