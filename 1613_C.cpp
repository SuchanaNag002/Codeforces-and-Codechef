#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,l,r,mid,n,h,i,damage;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        vector<int>vec(n);
        for(i=0;i<n;i++)
            cin>>vec[i];
        l=1,r=h;
        while(l<=r)
        {
            damage=0;
            mid=l+(r-l)/2;
            for(i=0;i<n-1;i++)
            {
                if(vec[i]+mid>vec[i+1])
                    damage+=(vec[i+1]-vec[i]);
                else
                    damage+=mid; 
            }
            damage+=mid;
            if(damage>=h)
                r=mid-1;
            else
                l=mid+1;
        }    
        cout<<l<<endl;
    }
}