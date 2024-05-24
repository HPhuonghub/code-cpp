#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a=0,max=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				a=a*10+s[i]-'0';
			}
			if(s[i]>='a'&&s[i]<='z'||i==s.size()-1){
				max=max+a;
				a=0;
			}
		}
		cout << max << endl;
	}
}
