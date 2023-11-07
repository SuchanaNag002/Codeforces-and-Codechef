#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,count1,count2,ind,res;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count1=count2=0;//stores the no. of 2's coming originally from the elements and from the indices
        vector<int>arr(n);
        vector<int>indices;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            while(!(arr[i]&1))
            {
                arr[i]/=2;
                count1++;
            }
        }
        for(i=1;i<=n;i++)
        {
            ind=i;
            count2=0;
            while(!(ind&1))
            {
                ind/=2;
                count2++;
            }
            indices.push_back(count2);
        }
        sort(indices.begin(),indices.end(),greater<int>());
        if(count1>=n)
            res=0;
        else
        {
            res=0;
            for(i=0;i<n;i++)
            {
                if(count1+indices[i]>=n)
                {
                    count1=n;
                    res++;
                    break;
                }
                count1+=indices[i];
                res++;
            }
            if(count1<n)
                res=-1;
        }
        cout<<res<<endl;
    }
}