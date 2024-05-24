#include <bits/stdc++.h>
using namespace std;
int n,tam=0,sau=0,a=0,b=0,c=0; string s;
void in(){
	if(s[1]=='0'&&s[0]=='0') b++;
	if(s[3]==s[4] && s[3]=='2') tam++;
	if(s[2]=='2') c++;
	if(tam==1 && b==0 && c==0){
		for(int i=0;i<n;i++){
			if(i==1 || i==3){
				cout << s[i] << "/";
			}
			else cout << s[i];
		}
		cout << endl;
	}
	tam=0,sau=0,b=0,c=0;
}
void sinh(){
	int j=n-1;
	while(s[j]=='2'){
		s[j] = '0';
		j--;
	}
	if(j==-1) a=1;
	else s[j]='2';
}
int main(){
	n=8;
	for(int i=0;i<n;i++){
		s[i]='0';
	}
	while(a!=1){
		in();
		sinh();
	}
}