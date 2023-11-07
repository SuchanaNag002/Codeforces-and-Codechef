#include<bits/stdc++.h>
using namespace std;
//TC:O(sqrt(n)logn)
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    float res=n;
    for(i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            cout<<"Prime factor: "<<i<<" ";
            n=n/i;
            res*=(1-(1.0/i));
        }
    }
    if(n>1)//in case of prime number greater than square root of n
    {
        cout<<"Prime factor#: "<<n<<endl;
        res*=(1-(1.0/n));
    }
    cout<<(int)res<<endl;
}