#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int k){
	int m=-1;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			m=i+1;
			break;
		}
	}
	cout << m << endl;
}
int main(){
	int t,k,n,a[100000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		xuat(a,n,k);
	}
}
