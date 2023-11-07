#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        queue<int>q;
        for(i=0;i<n;i++)
        {
            q.push(arr[i]);
            while(q.front()<q.size())
                q.pop();
            cout<<q.size()<<" ";
        }
        cout<<endl;
    }
}