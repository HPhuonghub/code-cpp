#include <bits/stdc++.h>
using namespace std;
int n, B[15]; char A[15], c;
int kiemtra(){
	for(int i=2;i<n;i++){
		if(A[i]=='A' && A[i-1]!='E' && A[i+1]!='E') return 0;
		if(A[i]=='E' && A[i-1]!='A' && A[i+1]!='A') return 0;
	}
	return 1;
}
void in(){
	for(int i=1;i<=n;i++) cout << A[i];
	cout << endl;
}
void quaylui(int i){
	char j;
	for(j='A';j<=c;j++){
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
int main(){
	cin >> c;
	n = (c-'A')+1;
	quaylui(1);
}