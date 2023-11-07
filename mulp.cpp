#include <bits/stdc++.h>
using namespace std;
int solution(vector< vector<int> > &A) {
    int m, n, i, j, sumRow1, sumRow2, sumCol1, sumCol2, k, ans = 0;
    m = A.size();
    n = A[0].size();
    vector<int> row(m, 0), col(n, 0);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            row[i] += A[i][j];
    for (j = 0; j < n; j++)
        for (i = 0; i < m; i++)
            col[j] += A[i][j];
    for (i = 0; i < m; i++)
    {
        sumRow1 = sumRow2 = 0;
        for (k = 0; k < i; k++)
            sumRow1 += row[k];
        for (k = i + 1; k < m; k++)
            sumRow2 += row[k];
        for (j = 0; j < n; j++)
        {
            sumCol1 = sumCol2 = 0;
            for (k = 0; k < j; k++)
                sumCol1 += col[k];
            for (k = j + 1; k < n; k++)
                sumCol2 += col[k];
            if (sumRow1 == sumRow2 && sumCol1 == sumCol2)
                ans++;
        }
    }
    return ans;
}

int main()
{
    int m, n, i, j;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n, 0));
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    int ans = solution(A);
    cout << ans << endl;
}