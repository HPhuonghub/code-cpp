#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m=-1;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			int c=0,b=0;
			for(int j=i+1;j<n;j++){
				c=c+a[j];
			}
			for(int j=i-1;j>=0;j--){
				b=b+a[j];
			}
			if(b==c){
				m=i+1;
				break;
			}
		}
		cout << m << endl;
	}
}