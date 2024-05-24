#include <iostream>
using namespace std;

void nhap(int a[],int n,int k){
	for(int i=0;i<n*k;i++){
		cin >> a[i];
	}
}
void sapxep(int a[],int n,int k){
	for(int i=0;i<n*k-1;i++){
		for(int j=i+1;j<n*k;j++){
			if(a[i]>a[j]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
	    }
    }
}
void xuat(int a[],int n,int k){
	for(int i=0;i<n*k;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t,n,k,a[100000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n,k);
		sapxep(a,n,k);
		xuat(a,n,k);
	}
}
