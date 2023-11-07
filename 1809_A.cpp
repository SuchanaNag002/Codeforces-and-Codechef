#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, max, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            if(arr[i]>=1 && arr[i]<=7)
                max=i;
        }
        cout<<max+1<<endl;
    }
}