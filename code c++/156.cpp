#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int a[1001][1001];
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			if(a[i][j]==1){
				cout << j << " ";
			}
		}
		cout << endl;
	}
}