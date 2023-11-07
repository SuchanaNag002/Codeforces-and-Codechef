#include<bits/stdc++.h>
using namespace std;
struct Triplet
{
   int x,y;
}ans,stepAns,res;
Triplet extendedEuclid(int a, int b)
{
   if(b == 0)//if b=0 then ax=gcd implies x=1 and y=0
   {
       ans.x = 1;
       ans.y = 0;
       return ans;
   }
 
   stepAns= extendedEuclid(b, a%b);
   ans.x = stepAns.y;
   ans.y = stepAns.x - (a/b)*stepAns.y;
   return ans;
}
int main()
{
    int a,m;
    cout<<"Enter a and m: ";
    cin>>a>>m;
    if(__gcd(a,m)==1)
    {
        res=extendedEuclid(a,m);
        cout<<res.x<<endl;
    }
    else
        cout<<"Modular multiplicative inverse does not exist"<<endl;
}