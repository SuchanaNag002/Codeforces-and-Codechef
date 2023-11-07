#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int w,d,h,a,b,f,g,t,mini1,mini2;
    cin >> t;
    while (t--)
    {
        cin>>w>>d>>h;
        cin>>a>>b>>f>>g;
        mini1=min(b+abs(a-f)+g,a+abs(b-g)+f);
        mini1+=h;
        mini2=min(2*d+abs(a-f)-b-g,2*w+abs(b-g)-a-f);
        mini2+=h;
        cout<<min(mini1,mini2)<<endl;
    }
}
