#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,i,j,f,t;
    cin >> t;
    while (t--)
    {
        cin>>n;
        unordered_map<int,int>mpp;
        vector<vector<int>>vec;
        for(i=0;i<n;i++)
        {
            cin>>k;
            vector<int>v(k);
            for(j=0;j<k;j++)
            {
                cin>>v[j];
                mpp[v[j]]++;
            }
            vec.push_back(v);
        }
        for(i=0;i<n;i++)
        {
            f=1;
            for(auto x: vec[i])
                if(mpp[x]<2)
                    f=0;
            if(f)
                break;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
