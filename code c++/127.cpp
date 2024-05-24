#include <bits/stdc++.h>
using namespace std;
int n,k,OK=0,dem=0,m=0;
string s,s1;
void in(){
	int g=0;
	for(int i=0;i<n;i++){
		int u=6;
		while(u>0){
			if(s[i]==s[i+u-1] && s[i]=='O') g++;
			else{
				u=-1;
				g=0;
			}
			u--;
		}
		if(g==5){
			dem++;
			g=0;
		}
	}
	if(dem==1){
		for(int i=0;i<n;i++) cout << s[i];
		cout << endl;
	}
	dem=0;
}
void sinh(){
	int i=n-1;
	while(s[i]=='X'){
		s[i] = 'O'; i--;
	}
	if(i==-1) OK = 1;
	else s[i] = 'X';
}
main(){
	cin >> n;
	int k;
	for(int i=0;i<n;i++){
		s[i]='O';
	}
	while(!OK){
		in();
		sinh();
	}
}