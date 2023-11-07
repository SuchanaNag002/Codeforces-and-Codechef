#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin()+1,arr.end());
        if(arr[0]>arr[1])
            cout<<"ALICE"<<endl;
        else
            cout<<"BOB"<<endl;
    }
}