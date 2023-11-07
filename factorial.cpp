#include<bits/stdc++.h>
using namespace std;
unsigned long long  factorial(int n)
{
    unsigned long long f = 1,i;
    for (i = 1; i <= n; i++)
        f = (f*i);
    return f;
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Factorial is: "<<factorial(x)<<endl;
} 