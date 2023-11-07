#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, count1, count2,count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count1 = count2 = 0;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                count1++;
            else
                count2++;
        }
        if (count2 & 1)
        {
            cout << -1 << endl;
            continue;
        }
        else if (count2 == 0)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            count = 0;
            for (i = 0; i < n; i++)
            {
                if(arr[i]==2)
                {
                    count++;
                    if(count==(count2/2))
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }
}
