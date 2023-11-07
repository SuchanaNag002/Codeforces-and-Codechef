#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, x, m, d, i, swap1, swap2, gap, ans;
    cin>>t;
    while(t--) 
    {
        cin>>n>>m>>d;
        vector<int>a(m+1),pos(n+1);
        for(i = 1; i <= n; i++) {
            cin>>x;
            pos[ x ] = i;
        }
 
        for(i = 1; i <= m; i++) {
            cin>>a[i];
        }
 
        ans = INT_MAX;
 
        for(i = 1; i < m; i++) 
        {
            if(pos[a[i+1]] <= pos[a[i]] || pos[a[i+1]]-pos[a[i]] > d) 
            {
                ans = 0;
                break;
            }
            gap=pos[a[i+1]] - pos[a[i]];
 
            ans = min(ans, gap);
 
            int swap1 = d-gap+1;
            int swap2 = n-gap-1;
            if(swap2 >= swap1) ans = min(ans, swap1);
        }
 
        cout<<ans<<endl;
    }
}