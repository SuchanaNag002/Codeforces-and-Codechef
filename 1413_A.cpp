#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, temp, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0; i<n/2; i++)
        {
            temp = arr[i];
            arr[i] =arr[n-i-1];
            arr[n-i-1]= -1*temp;
        }
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}