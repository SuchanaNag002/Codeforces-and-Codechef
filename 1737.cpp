#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
ll bs_sqrt(ll x) 
{
  ll left = 0, right = 2000000123, mid;
  while (right > left) 
  {
    mid = (left + right) / 2;
    if (mid * mid > x) 
        right = mid;
    else 
        left = mid + 1;
  }
  return left - 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, l, r, i, sql, sqr, ans;
    cin >> t;
    while (t--)
    {
        cin>>l>>r;
        sql=bs_sqrt(l);
        sqr=bs_sqrt(r);
        if(sql==sqr)
        {
            ans=0;
            for(i=0;i<=2;i++)
                if(sql*(sql+i)>=l && sql*(sql+i)<=r)
                    ans++;
        }
        else
        {
            ans=(sqr-sql-1)*3;
            for(i=0;i<=2;i++)
            {
                if(sql*(sql+i)>=l && sql*(sql+i)<=r)
                    ans++;
                if(sqr*(sqr+i)>=l && sqr*(sqr+i)<=r)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
}