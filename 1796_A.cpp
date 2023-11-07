#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, f,x;
    string str="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB",check,s;
    x=str.size();
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        f=0;
        for(i=0;i<=(x-n);i++)
        {
            check=str.substr(i,n);
            if(s==check)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}