#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int k,m,d,n=0,h=0,a=-1,j=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='@'){
				d++;
				k=i;
			}
			if(s[i]==' '){
				j++;
			}
			if(s[i]=='.') m=i;
			if(s[s.size()-1]=='.') a=1;
		}
		for(int i=0;i<k;i++){
			if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='.'||s[i]=='_'){
				n++;
			}
		}for(int i=k+1;i<s.size();i++){
			if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='.'||s[i]=='_'){
				h++;
			}
		}
		if(d==1&&j==0&&n==k&&h==(s.size()-k-1)&&){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
