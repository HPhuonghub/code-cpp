#include <bits/stdc++.h>
using namespace std;
void solve(string s){
	stack<char> a;
	bool ok=true;
	for(int i=0;i<s.size();i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '[' ) a.push(s[i]);
		else if(s[i] == '}')
		{
			if(a.size() == 0) ok=false;
			else if(a.top() == '{') a.pop();
		}
		else if(s[i] == ']')
		{
			if(a.size() == 0) ok=false;
			else if(a.top() == '[') a.pop();
		}
		else if(s[i] == ')')
		{
			if(a.size() == 0) ok=false;
			else if(a.top() == '(') a.pop();
		}
	}
	if(a.size() > 0) ok=false;
	if(ok) cout << "YES";
	else cout << "NO";
	cout << '\n';
}
int main(){
	int t; string s;
	cin >> t;
	while(t--){
		cin >> s;
		solve(s);
	}
}