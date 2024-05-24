#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int k){
	for(int i=0;i<n;i++){
		if(a[i]==k){
			cout << i+1 << endl;
			break;
		}
	}
}
int main(){
	int t,n,k,a[100000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		xuat(a,n,k);
	}
}
