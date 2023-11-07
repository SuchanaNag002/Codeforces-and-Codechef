#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,bits,sum,f=0,x;
    cin>>n;
    vector<int>vec;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    for(i=0;i<=(1<<n)-1;i++)
    {
        sum=0;
        for(bits=0;bits<n;bits++)
        {
            if(i&(1<<bits))
                sum+=vec[bits];
            else
                sum-=vec[bits];
        }
        if((sum%360)==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}