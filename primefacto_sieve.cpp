#include<bits/stdc++.h>
using namespace std;
int N=1000000;
int spf[1000001];
void createSieve()
{
    int i,j;
    for(i=1;i<=N;i++)
        spf[i]=i;
    for(i=2;i*i<=N;i++)
    {
        if(spf[i]==i)
        {
            for(j=i*i;j<=N;j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
}
int main()
{
    int t,n;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    createSieve();
    while(t--)
    {
        cout<<"Enter the number: ";
        cin>>n;
        //print prime factorisation
        while(n!=1)
        {
            cout<<spf[n]<<" ";
            n=n/spf[n];
        }
        cout<<endl;
    }
}