#include <bits/stdc++.h>
using namespace std;
int n,k,OK=0,dem=0,m=0;
string s;
vector<string> t;
void in(){
	int g=0;
	for(int i=0;i<n;i++){
		int u=k;
		while(u>0){
			if(s[i]==s[i+u-1] && s[i]=='A') g++;
			else{
				u=-1;
				g=0;
			}
			u--;
		}
		if(g==k){
			dem++;
			g=0;
		}
	}
	if(dem==1){
		string h;
		for(int i=0;i<n;i++) h=h+s[i];
		t.push_back(h);
		m++;
	}
	dem=0;
}
void sinh(){
	int i=n-1;
	while(s[i]=='B'){
		s[i] = 'A'; i--;
	}
	if(i==-1) OK = 1;
	else s[i] = 'B';
}
main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		s[i]='A';
	}
	while(!OK){
		in();
		sinh();
	}
	cout << m << endl;
	for(int i=0;i<t.size();i++){
		cout << t[i] << endl;
	}
}