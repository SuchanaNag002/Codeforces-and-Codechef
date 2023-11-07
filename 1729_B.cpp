#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ld,fd,num,i,t,size;
    char ch;
    cin>>t;
    string n;
    while(t--)
    {
        cin>>size>>n;
        vector<char>vec;
        for(i=size-1;i>=0;i--)
        {
            if(n[i]=='0')
            {
                ld=n[i-1]-48;
                fd=n[i-2]-48;
                num=fd*10+ld;
                ch=num+96;
                vec.push_back(ch);
                i-=2;
            }
            else
            {
                num=n[i]-48;
                ch=num+96;
                vec.push_back(ch);
            }
        }
        reverse(vec.begin(),vec.end());
        for(i=0;i<vec.size();i++)
            cout<<vec[i]<<"";
        cout<<endl;
    }
}