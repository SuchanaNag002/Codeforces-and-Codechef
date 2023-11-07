#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,f,count;
    cin>>t;
    while(t--)
    {
        char table[8][8];
        count=0;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                cin>>table[i][j];
        }
        f=0;
        for(i=0;i<8;i++)
        {
            count=0;
            for(j=0;j<8;j++)
            {
                if(table[i][j]=='R')
                    count++;
            }
            if(count==8)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"R"<<endl;
        else
            cout<<"B"<<endl;
    }
    
}