#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,cost,j;
    string s;
    cin>>t;
    while(t--)
    {
        cost=0;
        cin>>n;
        cin>>s;
        string marked(n,'1');
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')//remove all its multiples
            {
                for(j=i+1;j<=n;j+=(i+1))//1-based indexing
                {
                    if(s[j-1]=='1')//0-based indexing
                        break;
                    if(marked[j-1]=='0')
                        continue;
                    marked[j-1]='0';
                    cost+=(i+1);
                }
            }
        }
        cout<<cost<<endl;
    }
}