#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n/2 + n % 2<<endl;
        i=1;j=3*n;
        while(i<j)
        {
            cout<<i<<" "<<j<<endl;
            i+=3;
            j-=3;
        }
    }
}