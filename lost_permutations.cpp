#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int t,m,s,i,num,maxi;
    cin>>t;
    while(t--)
    {
        cin>>m>>s;
        maxi=INT_MIN;
        vector<int>b(m);
        vector<int>check;
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            check.push_back(b[i]);
            maxi=max(maxi,b[i]);
        }
        num=1;
        while(true)
        {
            if(find(b.begin(),b.end(),num)==b.end())
            {
                check.push_back(num);
                s-=num;
            }
           // cout<<s<<endl;
            if(check.size()>=maxi && s==0)
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(check.size()!=maxi && s==0)
            {
                cout<<"NO"<<endl;
                break;
            }
            else if(s<0)
            {
                cout<<"NO"<<endl;
                break;
            }
            num++;
        }
    }
}