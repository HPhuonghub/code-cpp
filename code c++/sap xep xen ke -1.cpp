#include <iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout << a[n-1-i/2] << " ";
		}
		else {
			cout << a[(i-1)/2] << " ";
		}
	}
}
int main(){
	int t,n,a[1000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		sapxep(a,n);
		xuat(a,n);
		cout << endl;
	}
}
