#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k, x, div, count, i, z = 0,elt;
    cin >> n >> k >> x;
    vector<ll> vec;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        cin>>elt;
        vec.push_back(elt);
    }
    sort(vec.begin(), vec.end());
    for (i = 1; i < n ; i++)
    {
        if ((vec[i] - vec[i-1]) <= x)
            v.push_back(z);
        else
            v.push_back(vec[i] - vec[i-1]);
    }
    sort(v.begin(),v.end());
    /*for (i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;*/
    for (i = 0; i < v.size(); i++)
    {
        if (k == 0)
            break;
        if (v[i] != 0 && k > 0)
        {
            div = (v[i]-1)/ x;
            if (div > k)
                continue;
            else
            {
                k = k - div;
                v[i] = z;
            }
        }
    }
    count = 0;
    for (i = 0; i < v.size(); i++)
        if(v[i]!=0)
            count++;
    cout << count + 1 << endl;
}