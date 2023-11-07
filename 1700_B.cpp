#include<bits/stdc++.h>
#define ll long
using namespace std;
int main()
{
    ll t,n,len,i;
    int dig;
    cin>>t;
    string s,ans;
    while(t--)
    {
        cin>>len;
        cin>>s;
        ans="";
        if(s[0]!='9')
        {
            for(i=0;i<len;i++)
            {
                dig=9-(int)(s[i]-'0');
                ans+=dig+'0';
            }
        }
        else
        {
            int carry=0;
            for(i=len-1;i>=0;i--)
            {
                dig=(int)(s[i]-'0');
                dig=dig+carry;
                if(dig>1)
                {
                    dig=11-dig;
                    carry=1;
                    ans+=dig+'0';
                }
                else
                {
                    dig=1-dig;
                    carry=0;
                    ans+=dig+'0';
                }
            }
            reverse(ans.begin(),ans.end());
        }
        cout<<ans<<endl;
    }
}