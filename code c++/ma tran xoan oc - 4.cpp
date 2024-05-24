#include <bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int b[],int n){
	for(int i=0;i<n*n;i++){
		cin >> b[i];
	}
	sort(b,b+n*n);
}
void tang(int a[][100],int b[],int hang1,int cot1,int hang2,int cot2){
	int m=0;
	while(cot1<=cot2){
    for(int j=cot1;j<=cot2;j++){
		a[hang1][j]=b[m];
		m++;
	}
	for(int i=hang1+1;i<=hang2;i++){
		a[i][cot2]=b[m];
		m++;
	}
    for(int j=cot2-1;j>=cot1;j--){
		a[hang2][j]=b[m];
		m++;
	}
	for(int i=hang2-1;i>hang1;i--){
		a[i][cot1]=b[m];
		m++;
	}
	cot1++; hang1++; cot2--; hang2--;
    }
}
void xuat(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int b[n*n];
	int a[100][100];
	nhap(a,b,n);
	tang(a,b,0,0,n-1,n-1);
	xuat(a,n);
}
