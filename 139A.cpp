#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,d,cntdig,cnt,r,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(i=1;i<=n;i++)
        {
            cntdig=0;
            x=i;
            while(x)
            {
                r=x%10;
                if(r!=0)
                    cntdig++;
                r/=10;
            }
            if(cntdig==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}