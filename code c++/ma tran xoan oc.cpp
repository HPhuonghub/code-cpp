#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
void xuat(int a[],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
	}
}
int main(){
	int t,n,m,a[100000];
	cin >> t;
	while(t--){
		cin >> m >> n;
		nhap(a,m,n);
		int d=0,gt=1;
		int hang = m-1,cot=n-1;
		while(gt<=m*n){
			for(int i=d;i<=cot;++){
				a[d][i]=gt++;
			}
			for(i=d+1;i<=hang;i++){
				a[i][cot]=gt++;
			}
			for(int i=cot-1;i>=d&&gt<=m*n;i--){
				a[hang][i]=gt++;
			}
			for(int i=hang-1;i>d&&gt<=m*n;i--){
				a[i][d]=gt++;
			}
			d++;
			hang--;
			cot--;
		}
		xuat(a,m,n);
		
	}
}
