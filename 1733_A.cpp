#include<bits/stdc++.h>
using namespace std;
//0 1 2 3 4 5
//7 0 4 0 4 10
int main()
{
    int t,n,k,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n+1];
        sum=0;
        for(i=1;i<=n;i++)
            cin>>arr[i];
        i=k;
        while((i+k)<=n)
        {
            if(arr[i]>arr[i+k])
                swap(arr[i],arr[i+k]);
            i+=k;
        }
        for(i=n;i>(n-k);i--)
            sum+=arr[i];
        cout<<sum<<endl;
    } 
}