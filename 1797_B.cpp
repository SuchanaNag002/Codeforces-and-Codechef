#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, j, k, need;
    cin >> t;
    while (t--)
    {
        cin>>n>>k;
        int arr[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>arr[i][j];
        need=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(arr[i][j]!=arr[n-i-1][n-j-1])
                    need++;
        need/=2;
        if(k>=need && ((n&1)||(!((k-need)&1))))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}