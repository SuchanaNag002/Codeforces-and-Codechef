#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n;
    string s;
    cin >> t;
    while (t--)
    {
        cin>>s;
        n=s.size();
        if(s[0]==s[n-1])
            cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1];
        else
        {
            if(s[0]=='a')
                cout<<s.substr(0,n-2)<<" "<<s[n-2]<<" "<<s[n-1];
            else
                cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n-2);
        }
        cout<<endl;
    }
}
