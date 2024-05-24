#include <bits/stdc++.h>
using namespace std;
int n, A[15], B[15] = {0};
int kiemtra(){
	for(int i=1;i<n;i++){
		int t = abs(A[i]-A[i+1]);
		if(t==1) return 0;
	}
	return 1;
}
void in(){
	for(int i=1;i<=n;i++) cout << A[i];
	cout << endl;
}
void quaylui(int i){
	int j;
	for(int j=1;j<=n;j++){
		if(B[j]==0){
			A[i] = j; B[j] = 1;
			if(i==n){
				if(kiemtra()) in();
			}
			else quaylui(i+1);
			B[j] = 0;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		quaylui(1);
	}
}