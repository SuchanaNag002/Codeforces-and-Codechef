#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
lli getHash(string key)
{
    lli val=0;
    lli p=31;
    lli p_pow=1;
    for(char ch:key)
    {
        val=(val+(ch-'a'+1)*p_pow)%mod;
        p_pow=(p_pow*p)%mod;
    }
    return val;
}
int main()
{
    bool flag=1;
    while(flag)
    {
        string key;
        cout<<"Enter key"<<endl;
        cin>>key;
        if(key==".")
            flag=false;
        else
            cout<<"Key: "<<key<<" Hash: "<<getHash(key)<<endl;
    }
}