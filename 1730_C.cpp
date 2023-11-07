#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,i,n,curr;
    char x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.length();
        map<char,ll>pos;
        multiset<char>ms;//same values allowed
        for(i=0;i<n;i++)
            pos[s[i]]=i;//stores last index of every number
        curr=0;
        for(x='0';x<='9';x++)
        {
            if(pos.find(x)==pos.end())//if not present in map
                continue;
            for(;curr<=pos[x];curr++)
            {
                if(s[curr]==x || s[curr]=='9')
                    ms.insert(s[curr]);
                else
                    ms.insert(s[curr]+1);
            }
        }
        for(char k:ms)
            cout<<k;
        cout<<endl;
    }
}