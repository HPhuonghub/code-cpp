#include <bits/stdc++.h>
using namespace std;
int OK = 0, B[25]={0}, n,m;
void in(){
	int dem=0;
	for(int i=1;i<=n;i++) if(B[i]==1) dem++;
	if(dem==m){
		for(int i=1; i<=n;i++) cout << B[i];
		cout << endl;
	}
	dem=0;
}
void sinh(){
	int i=n;
	while(B[i]){
		B[i] = 0; i--;
	}
	if(i==0) OK = 1;
	else B[i] = 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		while(!OK){
			in();
			sinh();
		}
		OK =0;
	}
}