#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void generateSubsets(ll ind, string unique_str, vector<string> &Q, ll numRepChar, string curr)
{
    if (curr.size() == numRepChar)
    {
        Q.push_back(curr);
        return;
    }
    if (ind == unique_str.size())
        return;
    generateSubsets(ind + 1, unique_str, Q, numRepChar, curr);
    generateSubsets(ind + 1, unique_str, Q, numRepChar, curr+unique_str[ind]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, ans, i, k, numUniqueChar, numRepChar, curr_ans, cnt;
    string a, b, unique_str;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> a >> b;
        set<char> st;
        unique_str = "";
        for (i = 0; i < n; i++)
            st.insert(a[i]);
        for (auto ch : st)
            unique_str.push_back(ch);
        vector<string> Q;
        numUniqueChar = unique_str.size();
        numRepChar = min(numUniqueChar, k);
        generateSubsets(0, unique_str, Q, numRepChar, "");
        ans = 0;
        for (auto subset : Q)
        {
            cnt = curr_ans = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == b[i] || subset.find(a[i]) != subset.npos)
                    cnt++;
                else
                {
                    curr_ans += (cnt * (cnt + 1)) / 2;
                    cnt = 0;
                }
            }
            curr_ans += (cnt * (cnt + 1)) / 2;
            ans = max(ans, curr_ans);
        }
        cout << ans << endl;
    }
}