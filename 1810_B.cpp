#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, count, n, i, x;
    cin >> t;
    while (t--)
    {
        cin>>n;
        if(!(n&1))
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int>res;
        count=40;
        while(count && n!=1)
        {
            x=(n+1)/2;
            count--;
            if(!(x&1))
            {
                n=(n-1)/2;
                res.push_back(2);
            }
            else
            {
                n=x;
                res.push_back(1);
            }
        }
        if(n==1)
        {
            cout<<res.size()<<endl;
            for(i=res.size()-1;i>=0;i--)
                cout<<res[i]<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}