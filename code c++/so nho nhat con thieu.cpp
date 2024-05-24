#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n-1;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int m=1;
	for(int i=0;i<n-1;i++){
		if(a[i]==m){
			m++;
		}
		else{
			break;
		}
	}
	cout << m << endl;
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
