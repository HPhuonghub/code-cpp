#include <bits/stdc++.h>
using namespace std;
bool check(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/')
	return 1; return 0;
}
void solve(){
	string str;
	cin >> str;
	stack<string> s;
	for(int i=str.size()-1;i>=0;i--){
		if(check(str[i])==0) s.push(string(1,str[i]));
		else{
			string str1=s.top(); s.pop();
			string str2=s.top(); s.pop();
			string temp="("+str1+str[i]+str2+")";
			s.push(temp);
		}
	}
	cout << s.top() << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}