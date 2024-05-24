#include <bits/stdc++.h>
using namespace std;
int n; string s;
void in(){
	cout << s << endl;
}
void sinh(){
	int i=n-1;
	while(i >= 0 && s[i] == '0'){
		s[i] = '1'; i--;
	}
	if(i > 0)	s[i] = '0';
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		sinh();
		in();
	}
}