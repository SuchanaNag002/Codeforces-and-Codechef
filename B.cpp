#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, count, i;
    string ans, s;
    cin >> t;
    while (t--)
    {
        cin>>n>>s;
        count=1;
        ans="";
        if(n<=2)
        {
            cout<<s<<endl;
            continue;
        }
        for(i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                if(!(count&1))
                    ans+=s[i-1];
                ans+=s[i-1];
                count=1; 
            }
            else
                count++;
        }
        if(!(count&1))
            ans+=s[n-1];
        ans+=s[n-1];
        cout<<ans<<endl;
    }
}