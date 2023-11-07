#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    ll t, n, z, o, pz, po, ans, i, sw, sd, curr;
    cin >> t;
    while (t--)
    {
        cin>>s;
        n=s.size();
        z=o=po=po=0;
        sw=1e12, sd= 1e12+1;
        for(i=0;i<n;i++)
        {
            if(s[i]='1')
                o++;
            else
                z++;
        }
        ans=sd*(min(z,o));
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
                po++;
            else    
                pz++;
            curr=0;
            curr+=(sd*po+min(sd*(z-pz),sd*(o-po)));
            ans=min(curr,ans);
            if(s[i]=='1' && i<n-1 && s[i+1]=='0')//swapping
            {
                curr=sd*(po-1)+min(sd*(z-pz-1),sd*(o-po+1))+sw;
                ans=min(curr,ans);
            } 
        }
        cout<<ans<<endl;
    }
}