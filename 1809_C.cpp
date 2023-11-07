#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k, i, p, extra, ind, val, sum;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k == 0)
        {
            for (i = 1; i <= n; i++)
                cout << -2 << " ";
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                if (((i * (i + 1)) / 2) <=k)
                    ind = i;
                else 
                    break;
            }
            for (i = 1; i <= n; i++)
            {
                if (i == ind + 1)
                {
                    sum = (ind * (ind + 1)) / 2;
                    extra=k-sum;
                    if (extra == 0)
                        cout << -1000 << " ";
                    else
                    {
                        val = 2 * (ind + 1) - 2 * extra - 1;
                        val=val*-1;
                        cout << val << " ";
                    }
                }
                else if(i<=ind)
                    cout<<2<<" ";
                else
                    cout << -1000 << " ";
            }
        }
        cout << endl;
    }
}