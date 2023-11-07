#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,f;
    string s,str;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        unordered_map<string,int>mpp;//substring,index where it was found
        f=0;
        for(i=0;i<n-1;i++)
        {
            str=s.substr(i,2);
            if(mpp.find(str)!=mpp.end())//present
            {
                if((mpp[str]+1)!=i)
                {
                    f=1;
                    break;
                }
            }
            else
                mpp[str]=i;
        }
        if(f==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}