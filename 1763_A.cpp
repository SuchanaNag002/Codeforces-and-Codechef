#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n,maxi,i,j,mini,k,x;
    cin >> t;
    while (t--)
    {
        cin>>n;
        maxi=INT_MIN;
        mini=INT_MAX;
        vector<int>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        for(i=0;i<n;i++)
        {
            x=arr[i];
            for(j=0;j<n;j++)
            {
                k=1;
                if(i!=j)
                {
                    while(k<=arr[i])
                    {
                        if(!(k&x)&&(arr[j]&k))
                            x+=k;
                        k=k<<1;
                    }
                }
                maxi=max(maxi,x);
            }
        }
        for(i=0;i<n;i++)
        {
            x=arr[i];
            for(j=0;j<n;j++)
            {
                k=1;
                if(i!=j)
                {
                    while(k<=arr[i])
                    {
                        if((k&x)&&(!(arr[j]&k)))
                            x-=k;
                        k=k<<1;
                    }
                }
                mini=min(mini,x);
            }
        }
        cout<<maxi-mini<<endl;
    }
}