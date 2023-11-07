#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, mini, maxi, i, m;
    cin>>t;
    while(t--)
    {
        vector<int>arr(3);
        for(i=0;i<3;i++)
            cin>>arr[i];
        cin>>m;
        sort(arr.begin(),arr.end());
        mini = arr[2]-arr[1]-arr[0]-1;
        maxi = arr[2]+arr[1]+arr[0]-3;
        if(mini<=m && m<=maxi)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}