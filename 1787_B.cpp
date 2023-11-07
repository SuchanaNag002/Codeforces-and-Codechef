#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, n, n1, maxi, count, ans, count1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        maxi=1, n1=n, ans=0;
        map<int,int>mpp;
        for(i=2; i*i<=n; i++)
        {
            if(!(n1%i))
            {
                count=0;
                while(!(n1%i))
                {
                    count++;
                    n1/=i;
                }
                mpp[i]=count;
                if(count>maxi)
                    maxi=count;
            }
        }
        if(n1!=1)
                mpp[n1]=1;
        for(i=0;i<maxi;i++)
        {
            count1=1;
            for(auto it:mpp)
            {
                if(it.second>0)
                {
                    mpp[it.first]-=1;
                    count1*=it.first;
                }
            }
            ans+=count1;
        }
        cout<<ans<<endl;
    }
}