#include<bits/stdc++.h>
using namespace std;
int n,OK=0,dem=0;
string s;
void in(){
	dem++;
	for(int i=0;i<n;i++) cout << s[i];
	if(dem<pow(2,n)){
		cout << ",";
	}
}
void sinh(){
	int i=n-1;
	while(s[i]=='B'){
		s[i] = 'A'; i--;
	}
	if(i==-1) OK = 1;
	else s[i] = 'B';
}
int main(){
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
		dem=0;	OK=0;
		cout << endl;
	}
}