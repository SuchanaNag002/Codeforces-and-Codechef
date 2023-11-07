#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;    //Reading input from STDIN
	map<int,multiset<string>> m;
     for(int i=0;i<n;i++)
	 {
		int marks;
		string s;
		cin>>s>>marks;
		m[marks].insert(s);
	 }
	for(auto it= m.end(); it != m.begin();it--)
	{
		int marks= (*it).first;
		auto names = (*it).second;
		for(auto it1:names)
		{
			cout<< it1 << " " << marks<<endl;
		}
	}
}