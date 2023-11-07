#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i,n,count,f;
    string s1,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        count=f=0;
        for(i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                if(!count)
                    count=1;
                else if(count==2)
                {
                    f=1;
                    break;
                }
            }
            else
            {
                if(count==1)
                    count+=1;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}