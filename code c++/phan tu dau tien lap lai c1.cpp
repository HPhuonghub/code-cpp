#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int m=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				m=a[i];
				goto m;
			}
		}
	}
	m:
	cout << m << endl;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		nhap(a,n);
		xuat(a,n);
	}
}
