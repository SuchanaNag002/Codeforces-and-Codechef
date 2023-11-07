#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,x,y,diff;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>=y)
        {
            cout<<0<<endl;
            continue;
        }
        diff=y-x;
        if(!(x%2))
        {
            if(diff&1)
                cout<<(diff/2)+1<<endl;
            else
                cout<<diff/2<<endl;
        }
        else if(!(x%3))
        {
            if((diff-3)&1)
                cout<<((diff-3)/2)+2<<endl;
            else
                cout<<((diff-3)/2)+1<<endl;
        }
        else if(!(x%5))
        {
            if((diff-5)&1)
                cout<<((diff-5)/2)+2<<endl;
            else
                cout<<((diff-5)/2)+1<<endl;
        }
        else if(!(x%7))
        {
            if((diff-7)&1)
                cout<<((diff-7)/2)+2<<endl;
            else
                cout<<((diff-7)/2)+1<<endl;
        }
        else
        {
            if((diff-x)&1)
                cout<<((diff-x)/2)+2<<endl;
            else
                cout<<((diff-x)/2)+1<<endl;
        }
    }
}