#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, count;
    string s;
    cin >> t;
    while (t--)
    {
        cin>>n>>s;
        count=0;
        for(i=0;i<=n-3;i++)
        {
            if(s[i]==s[i+2])
                count++;
        }
        cout<<n-count-1<<endl;
    }
}