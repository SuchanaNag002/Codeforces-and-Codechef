#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* string s1="10001";
    string s2="10001";
    for(int i=0;i<5;i++)
        s1[i]=s1[i]^s2[i];
    for(int i=0;i<5;i++)
        cout<<s1[i]<<" ";*/
    int n, k, x, div, count, i, z = 0,elt;
    cin >> n >> k >> x;
    vector<int>vec;
    vector<int>v;
    for (i = 0; i < n; i++)
    {
        cin>>elt;
        vec.push_back(elt);
    }
    cout<<vec[0]<<endl;
    sort(vec.begin(), vec.end());
    for (i = 1; i < n ; i++)
    {
        if ((vec[i] - vec[i-1]) <= x)
            v.push_back(z);
        else
            v.push_back(vec[i] - vec[i-1]);
    }
}