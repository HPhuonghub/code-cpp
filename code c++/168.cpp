#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> a;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' ){
				string s1= a.top(); a.pop();
				string s2= a.top(); a.pop();
				string m= "(" + s1 + s[i] + s2 + ")";
				a.push(m);
			}
			else a.push(string(1,s[i]));
		}
		cout << a.top() << endl;
		a.pop();
	}
}