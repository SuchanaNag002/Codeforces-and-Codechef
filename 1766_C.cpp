#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
void start(int r, int c,int m, char block[2][200001], bool vis[2][200001], int &colb)
{
    vis[r][c]=true;
    colb++;
    if(r==0)
    {
        if(block[1][c]=='B'&&vis[1][c]==false)
            start(1,c,m,block,vis,colb);
        else if(c+1<m)
        {
            if(block[0][c+1]=='B')
                start(0,c+1,m,block,vis,colb);
        }
    }
    else
    {
        if(block[0][c]=='B'&&vis[0][c]==false)
            start(0,c,m,block,vis,colb);
        else if(c+1<m)
        {
            if(block[1][c+1]=='B')
                start(1,c+1,m,block,vis,colb);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,m,i,j,totb,colb;
    string ans;
    cin>>t;
    while(t--)
    {
        cin>>m;
        char block[2][200001];
        bool vis[2][200001];
        totb=0;//total number of black cells
        for(i=0;i<2;i++)
            for(j=0;j<m;j++)
                cin>>block[i][j];
        for(j=0;j<m;j++)
        {
            if(block[0][j]=='B')
                totb++;
            if(block[1][j]=='B')
                totb++;
        }
        for(j=0;j<m;j++)
        {
            ans="NO";
            if(block[0][j]=='B' && block[1][j]=='B')
            {
                colb=0;
                for(i=0;i<m;i++)
                {
                    vis[0][i]=false;
                    vis[1][i]=false;
                }
                start(0,j,m,block,vis,colb);
                if(totb==colb)
                    ans="YES";
                colb=0;
                for(i=0;i<m;i++)
                {
                    vis[0][i]=false;
                    vis[1][i]=false;
                }
                start(1,j,m,block,vis,colb);
                if(totb==colb)
                    ans="YES";
                break;
            }
            else if(block[0][j]=='B')
            {
                colb=0;
                for(i=0;i<m;i++)
                {
                    vis[0][i]=false;
                    vis[1][i]=false;
                }
                start(0,j,m,block,vis,colb);
                if(totb==colb)
                    ans="YES";
                break;
            }
            else if(block[1][j]=='B')
            {
                colb=0;
                for(i=0;i<m;i++)
                {
                    vis[0][i]=false;
                    vis[1][i]=false;
                }
                start(1,j,m,block,vis,colb);
                if(totb==colb)
                    ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
}