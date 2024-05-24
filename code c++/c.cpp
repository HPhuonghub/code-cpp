#include <bits/stdc++.h>
using namespace std;
void nn(string s,string s1){
	for(int i=0;i<s.size();i++){
		if(s[i]=='6'){
			s[i]='5';
		}
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='6'){
			s1[i]='5';
		}
	}
	long long a,b;
	a = stoll(s);
	b = stoll(s1);
	cout << a + b << " " ;
}
void ln(string s,string s1){
	for(int i=0;i<s.size();i++){
		if(s[i]=='5'){
			s[i]='6';
		}
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='5'){
			s1[i]='6';
		}
	}
	long long a,b;
	a = stoll(s);
	b = stoll(s1);
	cout << a + b << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        nn(s1,s2);
        ln(s1,s2);
    }
}