#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,low,high,mid,target;
    cin>>n>>k;
    int arr[n];
    arr[0]=5;
    for(i=1;i<n;i++)
        arr[i]=arr[i-1]+(i+1)*5;
    low=0,high=n-1;
    target=240-k;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]<=target)
            low=mid+1;
        else
            high=mid-1;
    }
    cout<<low<<endl;
}