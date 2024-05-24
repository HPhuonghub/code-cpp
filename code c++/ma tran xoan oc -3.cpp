#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
int h=0;
void giam(int [][100],int [],int ,int ,int ,int);
void tang(int a[][100],int b[],int hang1,int cot1,int hang2,int cot2){
    for(int j=cot1;j<=cot2;j++){
		b[h]=a[hang1][j];
		h++;
	}
	for(int i=hang1+1;i<=hang2;i++){
		b[h]=a[i][cot2];
		h++;
	}
	if( cot2-cot1 > 0 && hang2-hang1 > 0){
		hang1++; cot2--;
		giam(a,b,hang1,cot1,hang2,cot2);
	}
	h=0;
}
void giam(int a[][100],int b[],int hang1,int cot1,int hang2,int cot2){
	for(int j=cot2;j>=cot1;j--){
		b[h]=a[hang2][j];
		h++;
	}
	for(int i=hang2-1;i>=hang1;i--){
		b[h]=a[i][cot1];
		h++;
	}
	if( cot2-cot1 > 0 && hang2-hang1 > 0){
		cot1++; hang2--;
		tang(a,b,hang1,cot1,hang2,cot2);
	}
}
void xuat(int b[],int &n,int &m,int &k){
	for(int i=0;i<m*n;i++){
		if(i==k-1){
			cout << b[i] << endl;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int b[n*m];
		int a[100][100];
		nhap(a,n,m);
		tang(a,b,0,0,n-1,m-1);
		xuat(b,n,m,k);
	}
}
