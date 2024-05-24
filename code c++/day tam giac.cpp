#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout << max << endl;
}
int main(){
	int t,n,a[100000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
	}
}	
