#include<bits/stdc++.h>
using namespace std;
int N=1000000;//max limit
bool sieve[1000001];//max limit
bool checkPrime(int n)
{
    int f=0,i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        return false;
    else
        return true;
}
void createSieve()
{
    int i,j;
    for(i=2;i<=N;i++)
        sieve[i]=true;//simply initialises the entire boolean array as true leaving indices 0 and 1
    for(i=2;i*i<=N;i++)
    {
        if(sieve[i])
        {
            for(j=i*i;j<=N;j+=i)
            {
                if(sieve[j])
                    sieve[j]=false;
            }
        }
    }
}
int main()
{
    createSieve();
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(sieve[n]==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}