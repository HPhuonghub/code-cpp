#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	s[0]='6';
	s[5]='8';
	for(int i=1;i<5;i++){
		s[i]='6';
	}
	for(int i=0;i<=5;i++){
		cout << s[i];
	}
}