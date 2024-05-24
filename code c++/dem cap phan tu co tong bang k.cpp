#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void dem(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				dem++;
			}
		}
	}
	cout << dem << endl;
}
int main(){
	int t,n,k,a[1000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		dem(a,n,k);
	}
}
