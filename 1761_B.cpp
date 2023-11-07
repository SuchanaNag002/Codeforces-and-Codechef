#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,gcd,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<int>s;
        for(i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        if(s.size()>=3)
            cout<<n<<endl;
        else
            cout<<(n/2)+1<<endl;
    }
}