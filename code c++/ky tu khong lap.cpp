#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			int m=0;
			for(int j=i+1;j>=0;j--){
				if(s[i]==s[j]){
					m++;
				}
			}
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j]){
					m++;
				}
			}
			if(m==1){
				cout << s[i];
			}
		}
		cout << endl;
	}
}
