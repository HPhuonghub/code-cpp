#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
void giam(int [][100],int ,int ,int ,int);
void tang(int a[][100],int hang1,int cot1,int hang2,int cot2){
    for(int j=cot1;j<=cot2;j++){
		cout << a[hang1][j] << " ";
	}
	for(int i=hang1+1;i<=hang2;i++){
		cout << a[i][cot2] << " ";
	}
	if( cot2-cot1 > 0 && hang2-hang1 > 0){
		hang1++; cot2--;
		giam(a,hang1,cot1,hang2,cot2);
	}
}
void giam(int a[][100],int hang1,int cot1,int hang2,int cot2){
	for(int j=cot2;j>=cot1;j--){
		cout << a[hang2][j] << " ";
	}
	for(int i=hang2-1;i>=hang1;i--){
		cout << a[i][cot1] << " ";
	}
	if( cot2-cot1 > 0 && hang2-hang1 > 0){
		cot1++; hang2--;
		tang(a,hang1,cot1,hang2,cot2);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[100][100];
		nhap(a,n,m);
		tang(a,0,0,n-1,m-1);
		cout << endl;
	}
}
