#include<bits/stdc++.h>
#define long long int
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>s;
    n=s.length();
    stack<char>st;
    for(i=0;i<n;i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if(st.top()==s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    if(st.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}