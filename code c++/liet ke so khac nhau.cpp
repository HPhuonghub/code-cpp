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
	int m=a[0];
	for(int i=0;i<n;i++){
		if(i==0){
			cout << a[i] << " ";
		}
		if(m!=a[i]){
			cout << a[i] << " ";
			m=a[i];
		}
	}
}
int main(){
	int n,a[1000];
	cin >> n;
	nhap(a,n);
	xuat(a,n);
}
