#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, f;
    cin >> t;
    while (t--)
    {
        cin>>n;
        unordered_map<int,int>mpp;
        vector<int>arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mpp[arr[i]]=i+1;
        }
        f=0;
        
        for(i=0;i<n;i++)
        {
            if(mpp[arr[i]]>=arr[i])
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}