#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k,f,i;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        f=1;
        vector<int>arr;
        arr.push_back(f);
        for(i=1;i<k;i++)
        {
            if(n-f-i+1>=k-i)
                f+=i;
            else
                f++;
            arr.push_back(f);
        }
        for(auto it:arr)
            cout<<it<<" ";
        cout<<endl;
    }
}