#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count_odd,count_even,i,n,elt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count_odd=count_even=0;
        for(i=1;i<=n;i++)
        {
            cin>>elt;
            (elt&1)?count_odd++:count_even++;
        }
        if(count_odd&1)
            cout<<"YES"<<endl;
        else
        {
            if(count_even>=1 && count_odd>=1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}