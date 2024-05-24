#include <iostream>
using namespace std;

void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n,m,a[100][100];
	cin >> n >> m;
	nhap(a,n,m);
	xuat(a,n,m);
}
