#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, n, neg, pos;
    cin >> t;
    while (t--)
    {
        cin >> n;
        neg = pos = 0;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                pos++;
            else
                neg++;
        }
        if (neg == 0)
        {
            pos -= 2;
            neg+=2;
        }
        else
        {
            for (i = 1; i < n; i++)
            {
                if (arr[i] == -1 && arr[i - 1] == -1)
                {
                    neg -= 2;
                    pos += 2;
                    break;
                }
            }
        }
        cout << pos - neg << endl;
    }
}