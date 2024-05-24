#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	int m=a[1]-a[0];
	for(int i=0;i<n-1;i++){
		if((a[i+1]-a[i])<m){
			m=a[i+1]-a[i];
		}
	}
	cout << m << endl;
}
int main(){
	int t,n,a[1000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
	}
}
