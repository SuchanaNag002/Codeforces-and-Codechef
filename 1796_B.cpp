#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, j, f;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a[0]==b[0])
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
            continue;
        }
        if(a[a.size()-1]==b[b.size()-1])
        {
            cout<<"YES"<<endl;
            cout<<"*"<<a[a.size()-1]<<endl;
            continue;
        }
        f=0;
        for(i=1;i<a.size();i++)
        {
            for(j=1;j<b.size();j++)
            {
                if(a[i-1]==b[j-1] && a[i]==b[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<"*"<<a[i-1]<<a[i]<<"*"<<endl;
        }
    }
}