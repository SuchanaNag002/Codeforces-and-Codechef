#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,d,k,q,i,j,n,lena,lenb;
    char sa,sb,la,lb;
    string x;
    cin>>t;
    while(t--)
    {
        sa=sb=la=lb='a';
        lena=lenb=1;
        cin>>q;
        while(q--)
        {
            cin>>d>>k>>x;
            n=x.size();
            if(d==1)//appends to string a
            {
                for(i=0;i<n;i++)
                {
                    if(x[i]>la)
                        la=x[i];
                }
                lena+=k*n;
            }
            else//appends to string b
            {
                for(i=0;i<n;i++)
                {
                    if(x[i]>lb)
                        lb=x[i];
                }
                lenb+=k*n;
            }
            if(sa<lb)
                cout<<"YES"<<endl;
            else if(la==lb)
            {
                if(lena<lenb)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}