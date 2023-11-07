#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, ind, i;
    string s;
    char mini;
    cin >> t;
    while (t--)
    {
        cin>>n>>s;
        mini='z';
        for(i=0;i<n;i++)
        {
            if(s[i]<=mini)
            {
                mini=s[i];
                ind=i;
            }
        }
        s.erase(s.begin()+ind);
        s=mini+s;
        cout<<s<<endl;
    }
}