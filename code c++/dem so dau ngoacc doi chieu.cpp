#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a = 0;
		if(s[0] == ')') a++, s[0] = '(';
		if(s[s.size()-1] == '(') a++, s[s.size()-1] = ')';
		stack<char> st;
		for(int i=0;i<s.size();i++){
			if(s[i] == '(') st.push(s[i]);
			else{
				if(!st.empty() && st.top() == '(') st.pop();
				else if(st.empty()) a++, st.push('(');
			}
		} 
		if(!st.empty()) a += st.size()/2;
		cout << a <<endl;
	}
}