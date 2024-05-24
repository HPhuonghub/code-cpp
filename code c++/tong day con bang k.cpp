#include <bits/stdc++.h>
using namespace std;
int OK = 0, A[25],B[25]={0}, n,k,dem=0;
int s=0;
void in(){
	for(int i=1;i<=n;i++){
		if(B[i]==1){
			s=s+A[i];
		}
	}
	if(s==k){
		dem++;
		for(int i=1;i<=n;i++){
			if(B[i]==1){
				cout << A[i] << " ";
			}
		}
		cout << endl;
	}
	s=0;
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
	cin >> n >> k;
	for(int i=1;i<=n;i++) cin >> A[i];
	while(!OK){
		in();
		sinh();
	}
	cout << dem;
}