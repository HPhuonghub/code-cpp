#include <bits/stdc++.h>
using namespace std;
void solve(string s){
	stack<int> a;
	int dem=0;
	a.push(-1);
	for(int i=0;i<s.size();i++){
		if(s[i] == '(' ) a.push(i);
		else
		{
			a.pop();
			if(a.size()>0) dem = max(dem,i-a.top());
			if(a.size()==0) a.push(i);
		}
	}
	cout << dem << endl;
}
int main(){
	int t; string s;
	cin >> t;
	while(t--){
		cin >> s;
		solve(s);
	}
}