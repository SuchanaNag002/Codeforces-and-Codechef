#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, pos, neg, x, count, pos1, neg1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        pos=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x>0)
                pos++;
        }
        neg=n-pos+1;
        pos1=pos,neg1=neg-1;
        //maximal
        count=1;
        for(i=1;i<=n;i++)
        {
            if(pos>0)
            {
                cout<<count<<" ";
                count++;
                pos--;
                neg=count;
                neg-=2;
            }
            else    
            {
                cout<<neg<<" ";
                neg--;
            }
        }
        cout<<endl;
        //minimal
        count=1;
        for(i=1;i<=neg1;i++)
            cout<<"1 0 ";
        for(i=1;i<=n-2*neg1;i++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}