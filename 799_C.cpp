#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    string s;
    ll i,j,ans=1;
    cin>>s;
    unordered_map<char,ll>mpp;
    for(i=0;i<10;i++)
        mpp[char(48+i)]=i;
    for(i=10;i<36;i++)
        mpp[char(55+i)]=i;
    for(i=36;i<62;i++)
        mpp[char(61+i)]=i;
    mpp['-']=62;
    mpp['_']=63;
    for(i=0;i<s.size();i++)
    {
        ll x=mpp[s[i]];
        for(j=0;j<6;j++)
            if(!(x&(1<<j)))
                ans=(ans*3)%MOD;
    }
    cout<<ans<<endl;
}