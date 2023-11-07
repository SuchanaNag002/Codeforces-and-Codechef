#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,e1,e2,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=0;
        int d[n],a[n];
        for(i=0;i<n;i++)
            cin>>d[i];
        a[0]=d[0];
        for(i=1;i<n;i++)
        {
            e1=a[i-1]-d[i];
            e2=a[i-1]+d[i];
            if(e1>=0 && e2>=0 && e1!=e2)
            {
                f=1;
                break;
            }
            else
                a[i]=max(e1,e2);
        }
        if(f==1)
            cout<<"-1"<<endl;
        else
        {
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}