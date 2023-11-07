#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,l,r,i,num;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        vector<ll>ans;
        ans.push_back(l);
        for(i=2;i<=n;i++)
        {
            if((l%i)==0)
                ans.push_back(l);
            else
            {
                num=((l/i)+1)*i;
                if(num<=r)
                    ans.push_back(num);
            }
        }
        if(ans.size()==n)
        {
            cout<<"YES"<<endl;
            for(auto it:ans)
                cout<<it<<" ";
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}