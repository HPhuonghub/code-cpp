#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int x){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			dem++;
		}
	}
	if(dem>0){
		cout << dem << endl;
	}
	else {
		cout << "-1" << endl;
	}
}
int main(){
	int t,n,x,a[100000];
	cin >> t;
	while(t--){
		cin >> n >> x;
		nhap(a,n);
		xuat(a,n,x);
	}
}
