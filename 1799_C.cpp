#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, j, l, r, len, fchars, lchars;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        n=s.size();
        char ans[n];
        l=0, r=n-1;
        for(i=0;i<n;i+=2)
        {
            if(i==n-1)
                ans[l]=s[i];
            else if(s[i]==s[i+1])
                ans[l++]=ans[r--]=s[i];
            else if(s[i+1]==s[n-1])
            {
                len=n-i-1;
                fchars=ceil(len/2.0);
                lchars=len/2;
                while(fchars--)
                    ans[l++]=s[i+1];
                ans[l++]=s[i];
                while(lchars--)
                    ans[l++]=s[i+1];
                break;
            }
            else
            {
                for(j=i+1;j<n;j++)
                    ans[l++]=s[j];
                ans[r]=s[i];
                break;
            }
        }
        for(i=0;i<n;i++)
            cout<<ans[i]<<"";
        cout<<endl;
    }
}