#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,maxLen=0,count=0;
    string s;
    cin>>s;
    n=s.length();
    vector<int>vec(n,0);
    stack<int>st;
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
            continue;
        }
        if(!st.empty() && s[i]==')')
        {
            j=st.top();
            st.pop();
        vec[i]=i-j+1+((j>=1)?vec[j-1]:0);
        }
        if(vec[i]>maxLen)
        {
            maxLen=vec[i];
            count=1;
        }
        else if(vec[i]==maxLen)
            count++;
    }  
    if(maxLen==0)
        cout<<"0 1"<<endl;
    else
        cout<<maxLen<<" "<<count<<endl;
}