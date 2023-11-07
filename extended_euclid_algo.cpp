//ax+by=gcd(a,b)
#include<bits/stdc++.h>
using namespace std;
struct Triplet
{
   int x,y,gcd;
}ans,stepAns,res;
Triplet extendedEuclid(int a, int b)
{
   if(b == 0)//if b=0 then ax=gcd implies x=1 and y=0
   {
       ans.gcd = a;
       ans.x = 1;
       ans.y = 0;
       return ans;
   }
 
   stepAns= extendedEuclid(b, a%b);
   ans.gcd = stepAns.gcd;
   ans.x = stepAns.y;
   ans.y = stepAns.x - (a/b)*stepAns.y;
   return ans;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    res=extendedEuclid(a,b);
    cout<<res.gcd<<" "<<res.x<<" "<<res.y<<endl;
}