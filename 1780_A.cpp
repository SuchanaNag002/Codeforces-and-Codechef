#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, n, x;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<int>odd,even;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x%2==0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        if(even.size()>=2 && odd.size()>=1)
        {
            cout<<"YES"<<endl;
            cout<<even[0]<<" "<<even[1]<<" "<<odd[0]<<endl;
        }
        else if(odd.size()>=3)
        {
            cout<<"YES"<<endl;
            cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
