#include <bits/stdc++.h>
using namespace std;
string s;
int a[100],b[100];
int n;
void Try(int i){
	for(int j=0;j<n;j++){
		if(a[j]==0){
			a[j]=1;
			b[i]=j;
			if(i==n){
				for(int m=1;m<=n;m++){
					cout << s[b[m]];
				}
				cout << " ";
			}
			else	Try(i+1);
			a[j]=0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		n=s.size();
		sort(s.begin(),s.end());
		Try(1);
		cout << endl;
	}
}