#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool solve()
{
    ll brac = 0, que = 0, op, cl, f = 0, ind;
    string s, check;
    cin >> s;
    for (auto ch : s)
    {
        if (ch == ')')
            brac++;
        else if (ch == '(')
            brac--;
        else
            que++;
    }
    op = (que + brac) / 2;
    cl = (que - brac) / 2;
    if (op == 0 || cl == 0)
        return true;
    ind = 0;
    // second optimal string
    check = string(op - 1, '(') + string(1, ')') + string(1, '(') + string(cl - 1, ')');
    for (char &ch : s)
    {
        if (ch == '?')
            ch = check[ind++];
    }
    brac = 0;
    for (char ch : s)
    {
        if (ch == '(')
            brac++;
        else
            brac--;
        if (brac < 0) // a second optimal rbs does not exist giving us a unique rbs only
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}