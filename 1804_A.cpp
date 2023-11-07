#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        if(a==b)
            cout<<2*a<<endl;
        else
            cout<<(2*max(a,b))-1<<endl;
    }
}