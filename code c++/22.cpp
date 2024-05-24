#include<iostream>
#include<math.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int min=9999999,t;
	for(int i = 0;i < n-1;i++){
		for(int j = i+1; j < n; j++) {
			    if(abs(a[i]+a[j]) <= abs(min)  ){
			        min = a[i]+a[j] ;
		        }
		    }
	    }
	cout << min << endl;
}
int main(){
	int t,n,a[n];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
	}
}
