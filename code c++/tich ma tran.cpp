#include <iostream>
using namespace std;

void nhap(int a[][50],int b[][50],int n,int m,int p){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			cin >> b[i][j];
		}
	}
}
void xuat(int a[][50],int b[][50],int n,int m,int p){
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			int s=0;
		    for(int k=0;k<m;k++){
			    s=s+(a[i][k]*b[k][j]);
		    }
		    cout << s << " ";
		}
		cout << endl;
	}
}
int main(){
	int n,m,p,a[50][50],b[50][50];
	cin >> n >> m >> p;
	nhap(a,b,n,m,p);
	xuat(a,b,n,m,p);
}
