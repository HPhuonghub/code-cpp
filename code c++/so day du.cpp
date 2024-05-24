#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		string s1="0123456789";
		getline(cin,s);
		int n=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<s.size();j++){
				if(s[0]=='0'){
					n=-1;
					break;
				}
				if(s[j]!='0'&&s[j]!='1'&&s[j]!='2'&&s[j]!='3'&&s[j]!='4'&&s[j]!='5'&&s[j]!='6'&&s[j]!='7'&&s[j]!='8'&&s[j]!='9'){
					n=-1;
					break;
				}
				if(s1[i]==s[j]){
					n++;
					break;
				}
			}
		}
		if(n==-1){
			cout << "INVALID" << endl;
		}
		else if(n==10){
			    cout << "YES" << endl;
		    }
		    else{
			    cout << "NO" << endl;
		    }
	}
}
