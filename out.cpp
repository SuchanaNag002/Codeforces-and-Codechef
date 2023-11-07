#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, n, dig1, dig2, sod1, sod2;
    string s, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (!(n & 1))
            cout << n / 2 << " " << n / 2 << endl;
        else if (!((n + 1) % 20))
        {
            s = to_string(n);
            sod1 = sod2 = 0;
            for (i = 0; i < s.size(); i++)
            {
                dig1 = (s[i] - '0') / 2;
                dig2 = (s[i] - '0') - dig1;
                if (dig1 == dig2)
                    a[i] = b[i] = '0' + dig1;
                if (dig1 > dig2)
                    swap(dig1, dig2);
                if (sod1 >= sod2)
                {
                    a[i] = '0' + dig1;
                    b[i] = '0' + dig2;
                    sod1 += (a[i] - '0');
                    sod2 += (b[i] - '0');
                }
                else
                {
                    a[i] = '0' + dig2;
                    b[i] = '0' + dig1;
                    sod1 += (a[i] - '0');
                    sod2 += (b[i] - '0');
                }
            }
            cout << stoi(a) << " " << stoi(b) << endl;
        }
        else
            cout << n / 2 << " " << (n / 2) + 1 << endl;
    }
}