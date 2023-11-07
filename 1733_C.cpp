#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+1];
        for(i=1;i<=n;i++)
            cin>>arr[i];
        if(n==1)
            cout<<"0"<<endl;
        else if(n==2)
        {
            if(arr[1]<=arr[2])
                cout<<"0"<<endl;
            else
            {
                cout<<"1"<<endl;
                cout<<"1 n"<<endl;
            }
        }
        else
        {
            cout<<n-1<<endl;
            if((arr[1]+arr[n])&1)
                arr[n]=arr[1];
            else
                arr[1]=arr[n];
            cout<<1<<" "<<n<<endl;
            for(i=2;i<n;i++)
            {
                if((arr[1]+arr[i])&1)
                    cout<<"1"<<" "<<i<<endl;
                else
                    cout<<i<<" "<<n<<endl;
            }
        }   
    }
}