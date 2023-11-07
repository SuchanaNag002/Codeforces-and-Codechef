#include<bits/stdc++.h>
using namespace std;
//TC:O(sqrt(n))--->HOW????
//should be O(sqrt(n)logn)
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)//in case of prime number
        cout<<n;
}