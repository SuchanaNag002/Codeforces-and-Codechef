#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<int>b(n-1),a;
        for(i=0;i<n-1;i++)
            cin>>b[i];
        a.push_back(b[0]);
        for(i=0;i<n-2;i++)
            a.push_back(min(b[i],b[i+1]));
        a.push_back(b[n-2]);
        for(int x:a)
            cout<<x<<" ";
        cout<<endl;
    }
}