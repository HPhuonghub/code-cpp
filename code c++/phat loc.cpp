#include <bits/stdc++.h>
using namespace std;
int n,tam=0,sau=0,a=0; string s;
void in(){
	for(int i=2;i<n-1;i++){
		if(s[i]==s[i+1] && s[i] == '8'){
			tam++;
		}
		if(s[i] == '6' && s[i]==s[i-1] && s[i]==s[i+1] && s[i]==s[i+2]){
			sau++;
		}
	}
	if(tam==0 && sau==0){
		for(int i=0;i<n;i++) cout << s[i];
		cout << endl;
	}
	sau=0,tam=0;
}
void sinh(){
	int j=n-2;
	while(s[j]=='8'){
		s[j] = '6';
		j--;
	}
	if(j==1) a=1;
	else s[j]='8';
}
int main(){
	cin >> n;
	s[0]='8';
	for(int i=1;i<n;i++){
		s[i]='6';
	}
	while(a!=1){
		in();
		sinh();
	}
}