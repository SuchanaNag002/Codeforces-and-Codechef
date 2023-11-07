#include<bits/stdc++.h>
#define ll long long
# define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,count,check;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=check=0;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            if(arr[i]!=0 && check==0)//first segment of non zero
            {
                check=1;
                count+=1;
            }
            else if(arr[i]==0 && check==1)
                check=0;
        }
        if(count>2)
            cout<<2<<endl;
        else
            cout<<count<<endl;
    }
}