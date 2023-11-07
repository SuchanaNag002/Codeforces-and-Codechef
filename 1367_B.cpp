#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count_odd,count_even,i,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count_odd=count_even=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if((x&1)!=(i&1))
                (x&1)?count_odd++:count_even++;
            if(count_odd==count_even)
                cout<<count_even<<endl;
            else
                cout<<"-1"<<endl;
        }
    }
}