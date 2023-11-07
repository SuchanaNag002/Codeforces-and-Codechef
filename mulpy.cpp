#include <bits/stdc++.h>
using namespace std;
// int func(int ind, vector<int>&A, int x, int y, int n)
// {
//     if(x == 0)
//         return 0;
//     if(ind >= n)
//         return INT_MAX;
//     int take = A[ind] + func(ind+y, A, x-1, y, n);
//     int notTake = func(ind+1, A, x, y, n);
//     return min(take, notTake);

// }
int solution(vector<int> &A, int X, int Y) {
    int n = A.size(), ans = INT_MAX, i, start, end, sum, cnt;
    for (i = 0; i < Y; i++) 
    {
        sum = cnt = 0;
        start = end = i;
        while (end < n) 
        {
            cnt++;
            sum += A[end];
            end += Y;
            while (cnt == X) 
            {
                ans = min(ans, sum);
                sum -= A[start];
                start += Y;
                cnt--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int>A{4,2,3,7};
    int x= 2, y = 2;
    int ans = solution(A, x, y);
    cout<<ans<<endl;
}