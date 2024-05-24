#include <bits/stdc++.h>
using namespace std;
int n,OK=0,dem=0; string s;
void in(){
	for(int i=0;i<n;i++){
		if(i==0 && s[i]=='A') dem++;
		if(i==n-1 && s[i]=='H') dem++;
		if(s[i]==s[i+1] && s[i]=='H'){
			dem++;
		}
	}
	if(dem==0){
		for(int i=0;i<n;i++) cout << s[i];
		cout << endl;
	}
	dem=0;
}
void sinh(){
	int i=n-1;
	while(s[i]=='H'){
		s[i] = 'A'; i--;
	}
	if(i==-1) OK = 1;
	else s[i] = 'H';
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			s[i]='A';
		}
		while(!OK){
			in();
			sinh();
		}
		OK=0;
	}
}