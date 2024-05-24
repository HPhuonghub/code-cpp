#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
	    int dem=0;
		for(int j=0;j<n;j++){
			if(i==a[j]){
				dem++;
			}
		}
		if(dem==0){
			cout << "-1 ";
		}
		else{
			cout << i << " ";
		}
	}
}
int main(){
	int t,a[100000],n;
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
        xuat(a,n);
	}
}

