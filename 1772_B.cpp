#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,f;
    cin >> t;
    while (t--)
    {
        f=0;
        vector<vector<int>>arr(2,vector<int>(2));
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
                cin>>arr[i][j];
        if((arr[0][0]>arr[1][0]&&arr[0][1]>arr[1][1])&&(arr[0][0]<arr[0][1]&&arr[1][0]<arr[1][1]))
            f=1;
        if((arr[0][0]>arr[1][0]&&arr[0][1]>arr[1][1])&&(arr[0][0]>arr[0][1]&&arr[1][0]>arr[1][1]))
            f=1;
        if((arr[0][0]<arr[1][0]&&arr[0][1]<arr[1][1])&&(arr[0][0]>arr[0][1]&&arr[1][0]>arr[1][1]))
            f=1;
        if((arr[0][0]<arr[1][0]&&arr[0][1]<arr[1][1])&&(arr[0][0]<arr[0][1]&&arr[1][0]<arr[1][1]))
            f=1;
        if(f==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}