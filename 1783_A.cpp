#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n,x,y;
    cin >> t;
    while (t--)
    {
        cin>>n;
        int arr[n][n];
        x=1;
        y=n*n;
        for(i=0;i<n;i++)
        {
            if(!(i&1))
            {
                for(j=0;j<n;j++)
                {
                    if(!(j&1))
                        cout<<x++<<" ";
                    else
                        cout<<y--<<" ";
                }
            }
            else
            {
                for(j=0;j<n;j++)
                {
                    if(!(j&1))
                        cout<<y--<<" ";
                    else
                        cout<<x++<<" ";
                }
            }
            cout<<endl;
        }
    }
}
