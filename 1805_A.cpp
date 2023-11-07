#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, count, x, i;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<int>arr(n);
        count=x=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            count++;
            x=x^arr[i];
        }
        if(!(count&1))
        {
            if(x==0)
                cout<<0<<endl;
            else
                cout<<-1<<endl;
        }
        else    
            cout<<x<<endl;
    }
}