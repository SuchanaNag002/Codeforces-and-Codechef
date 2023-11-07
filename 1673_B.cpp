#include<bits/stdc++.h>
#define ll long long
# define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        f=0;
        unordered_map<char,int>mpp;
        unordered_set<char>check;
        for(i=0;i<s[i];i++)
            check.insert(s[i]);
        if(check.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(i=0;i<s.length();i++)
        {
            if(mpp.find(s[i])!=mpp.end())//already present
            {
                if((i-mpp[s[i]])!=check.size())
                {
                    f=1;
                    break;
                }
            }
            mpp[s[i]]=i;
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}