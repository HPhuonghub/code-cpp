#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int m=-1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((a[j]-a[i])>m){
				m=a[j]-a[i];
			}
		}
	}
	cout << m << endl;
}
int main(){
	int t,n,a[1000];
	cin >> t;
	while(t--){
	    cin >> n;
		nhap(a,n);
		xuat(a,n);	
	}
}
