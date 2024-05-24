#include<bits/stdc++.h>
using namespace std;
int n,OK=0;
string s,s1;
void in(){
	int dem=0;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]&&s[i]==s[i+2]&&s[i]==s[i+3]&&s[i]==s[i+4]&&s[i]==s1[0]){
			int o=0,x=0;
			for(int i=0;i<n;i++){
				if(s[i]=='O') o++;
				else x++;
			}
			if(s1[0]=='O'&&o>x) dem++;
			if(s1[0]=='X'&&o<x) dem++;
		}
	}
	if(dem>0){
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
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s1;
		for(int i=0;i<n;i++){
			s[i]='O';
		}
		while(!OK){
			in();
			sinh();
		}
		OK=0;
	}
}