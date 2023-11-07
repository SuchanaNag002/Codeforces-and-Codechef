#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,i,f,t;
    cin >> t;
    while (t--)
    {
        cin>>a>>b>>c;
        f=0;
        for(i=0;i<100;i++)
        {
            if(((a^i)<(b^i)) && ((b^i)<(c^i)))
            {
                f=1;
                break;
            }   
        }
        if(!f)
            cout<<-1<<endl;
        else
            cout<<i<<endl;
    }
}