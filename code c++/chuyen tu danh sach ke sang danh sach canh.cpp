#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main(){
	int t;
	cin >> t;
	cin.ignore();
	for(int i=1;i<=t;i++){
		string s;
		getline(cin,s);
		s+=' ';
		int j=0;
		for(int k=0;k<s.length();k++){
			if(s[k]==' '){
				a[i][j]=a[j][i]=1;
				j=0;
			}
			else j=j*10+s[k]-'0';
		}
	}
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			cout << a[i][j]<<' ';
		} cout << endl;
	}
}