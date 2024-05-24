#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char> a;
		int dem=0;
		for(int i=0;i<s.size();i++){
			if(!(s[i]=='(' || s[i]=='[' || s[i]==')' || s[i]==']')) continue;
			if(s[i]=='(' || s[i]=='['){
				a.push(s[i]);
			}
			else if(s[i]==')' && a.size()!=0 && a.top()=='('){
				a.pop();
			}
			else if(s[i]==']' && a.size()!=0 && a.top()=='['){
				a.pop();
			}
			else dem++;
		}
		if(dem==0 && a.size()==0) cout << "YES\n";
		else cout << "NO\n";
	}
}