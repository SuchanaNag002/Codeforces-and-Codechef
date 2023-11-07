#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, co, i, ans,count;
        cin >> t;
    while (t--)
    {
        cin >> n;
        ans= INT_MAX;
        co=0;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                co++;
        }
        if (!(co & 1)) // count of odd numbers is odd
            ans = 0;
        else
        {
            for(i=0;i<n;i++)
            {
                count=0;
                if(arr[i]&1)
                {
                    while(true)
                    {
                        if(arr[i]&1)
                        {
                            count++;
                            arr[i]=arr[i]/2;
                        }
                        else
                            break;
                    }
                    arr[i]=count;
                }
                else
                {
                    while(true)
                    {
                        if(!(arr[i]&1))
                        {
                            count++;
                            arr[i]=arr[i]/2;
                        }
                        else
                            break;
                    }
                    arr[i]=count;
                }
                ans=min(ans,arr[i]);
            }
        }
        cout<<ans<<endl;
    }
}