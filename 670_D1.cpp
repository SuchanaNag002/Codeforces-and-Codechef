#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    vector<int>qua(n);
    vector<int>qua_past(n);
    for(i=0;i<n;i++)//quantity needed for baking
        cin>>qua[i];
    for(i=0;i<n;i++)//quantity already at hand
        cin>>qua_past[i];
    int l=0,h=2001,mid;
    while(l<=h)
    {
        int target=0,z=0;
        mid=l+(h-l)/2;//number of cookies to be baked
        for(i=0;i<n;i++)
            target+=max(mid*qua[i]-qua_past[i],z);
        if(target<=k)
            l=mid+1;
        else
            h=mid-1;
    }
    cout<<h<<endl;
}