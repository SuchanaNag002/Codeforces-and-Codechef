#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,j,x,len,f,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=0;
        unordered_map<int,int>mpp;
        vector<ll>vec;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mpp[x%10]++;
        }
        for(i=0;i<10;i++)
            for(j=0;j<min(mpp[i],3);j++)
                vec.push_back(i);
        len=vec.size();
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len;j++)
            {
                for(k=j+1;k<len;k++)
                {
                    if((vec[i]+vec[j]+vec[k])%10==3)
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;                   
    }
}