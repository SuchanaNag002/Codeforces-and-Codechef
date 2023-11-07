#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,a,b,x,i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a = 0, b = 0;
        for (i = 0; i < n; ++i)
        {
            cin >> x;
            if (x % 2 == 0)
                a += 1;
            else
                b += 1;
        }
        if (b % 4 == 2)
            cout << "Bob" << endl;
        else if (b % 4 == 3)
            cout << "Alice" << endl;
        else if (b % 4 == 0)
            cout << "Alice" << endl;
        else if (a % 2 == 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}