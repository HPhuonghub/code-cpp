#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	int a[51][51];
	memset(a,0,sizeof(a));
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
		for(int j=i+1;j<=t;j++){
			if(a[i][j]==1) cout << i <<' '<<j<<endl;
		}
	}
}