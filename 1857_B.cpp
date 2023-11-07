#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, n, k, j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        s='0'+s;
        n = s.size();
        k=n;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]>='5')
            {
                s[i]='0';
                k=i;
                j=i-1;
                while(s[j]=='9')
                {
                    s[j]='0';
                    j--;
                }
                s[j]++;
            }
        }
        for(i=k;i<n;i++)
            s[i]='0';
        if(s[0]=='0')
            s=s.substr(1);
        cout<<s<<endl;
    }
}