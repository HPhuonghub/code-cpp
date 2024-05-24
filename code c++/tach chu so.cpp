#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m=0,h=0;
		string s,s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		cin >> s;
		for(int i=0;i<26;i++){
			for(int j=0;j<s.size();j++){
				if(s1[i]==s[j]){
					cout << s[j];
				}
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				h=h+s[i]-'0';
			}
		}
		cout << h << endl;
	}
}