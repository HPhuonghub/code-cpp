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
void xuat(int a[],int n,int k){
	for(int i=n-1;i>=n-k;i--){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t,a[1000],n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		sapxep(a,n);
		xuat(a,n,k);
	}
}
