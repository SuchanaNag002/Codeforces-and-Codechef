#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sum=n;
        for(i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
                sum+=i;
        }
        cout<<sum<<endl;
    }
}