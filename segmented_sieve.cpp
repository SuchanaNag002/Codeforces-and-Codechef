#include<bits/stdc++.h>
using namespace std;
//l=10^12
//r=10^12
//l-r=10^6 are the constraints
//segmented sieve as we used a segment of it
int N=1000000;
bool sieve[1000001];
void createSieve()//10^6 TC like sieve of erastothenes
{
    int i,j;
    for(i=2;i<=N;i++)
        sieve[i]=true;
    for(i=2;i<=sqrt(N);i++)
    {
        if(sieve[i])
        {
            for(j=i*i;j<=N;j+=i)
                sieve[j]=false;
        }  
    }
}
vector<int>genPrimes(int N)//10^6 TC
{
    int i;
    vector<int>ds;
    for(i=2;i<=sqrt(N);i++)
    {
        if(sieve[i]==true)
            ds.push_back(i);
    }
    return ds;
}
int main()
{
    int t,l,r,i,j;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        createSieve();//10^6
        //step1:generate all primes till square root of r
        vector<int>primes=genPrimes(r);//10^6 as aqrt(10^12)
        //step2: create a dummy array of size r-l+1 and make everyone as 1
        if(l<2 && r>=2)
            l=2;//to handle edge cases for 0 and 1
        int dummy[r-l+1];//10^6
        for(i=0;i<r-l+1;i++)
            dummy[i]=1;
        //step3:mark all multiples of prime in dummy
        for(auto it:primes)//10^6
        {
            int firstMultiple=(l/it)*it;
            if(firstMultiple<l)
                firstMultiple+=it;
            for(j=max(firstMultiple,it*it);j<=r;j+=it)//TC can be ignored
               dummy[j-l]=0;
        }
        //step4:get all the primes
        for(i=l;i<=r;i++)
        {
            if(dummy[i-l]==1)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}