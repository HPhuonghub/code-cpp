#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n*n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int k){
	for(int i=0;i<n*n-1;i++){
		for(int j=0;j<n*n;j++){
			if(a[i]<a[j]){
			    int t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}
	    }
	}
	cout << a[k-1] << endl;
}
int main(){
	int t,a[10000],n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		xuat(a,n,k);
	}
}
