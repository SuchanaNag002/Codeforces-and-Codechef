#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n,i,x,elt;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<vector<int>>vec;
        for(i=0;i<n;i++)
        {
            cin>>x;
            vector<int>v{x,i+1};
            vec.push_back(v);
        }
        sort(vec.begin(),vec.end());
        cout<<n-1<<endl;
        for(i=1;i<n;i++)
        {
            elt=vec[i][0]%vec[i-1][0];
            if(elt==0)
                cout<<vec[i][1]<<" 0";
            else
            {
                vec[i][0]=vec[i][0]+vec[i-1][0]-elt;
                cout<<vec[i][1]<<" "<<vec[i-1][0]-elt;
            }
            cout<<endl;
        }
    }
}