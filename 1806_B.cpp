#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, x, count0, count1, countNot0, countNot1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count0=count1=countNot1=countNot0=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(!x)
                count0++;
            else
            {
                countNot0++;
                if(x==1)
                    count1++;
                else
                    countNot1++;
            }
        }
        if(count0>=countNot0+2)
        {
            if(count1 && !countNot1)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }
}