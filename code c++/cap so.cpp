#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j])>=k){
				dem++;
			}
		}
	}
	cout << dem << endl;
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
