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
	int h=0;
	for(int i=0;i<n-1;i++){
		if(a[i]!=a[i+1]){
			cout << a[i] << " " << a[i+1] << endl;
			break;
		}
		else{
			h++;
		}
	}
	if(h==(n-1)) cout << "-1" << endl;
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
