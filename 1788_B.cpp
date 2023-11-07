#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 10 == 9)
        {
            cout<<n-5<<" "<<5<<endl;
        }
        else
        {
            if (n & 1)
                cout << (n / 2) << " " << ((n / 2) + 1) << endl;
            else
                cout << (n / 2) << " " << (n / 2) << endl;
        }
    }
}
