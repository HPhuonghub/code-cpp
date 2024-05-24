#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int m=0;
		if(s[0]=='8' && s[1]=='4'){
			m=2;
		}
		if(s[0]=='+' && s[1]=='8' && s[2]=='4'){
			m=3;
		}
		if(m!=0){
			cout << "0";
		}
		for(int i=m;i<s.size();i++){
			if(isdigit(s[i])){
				cout << s[i];
			}
		}
		cout << endl;
	}
}
