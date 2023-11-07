#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,ways;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<int>arr(n);
        unordered_map<int,int>mpp;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        ways=0;
        if(!mpp[0])
            ways=2;
        else
            ways=1;
        for(i=0;i<n-1;i++)
            if(arr[i]<i+1 && arr[i+1]>=i+2)
                ways++;
        cout<<ways<<endl;
    }
}
