#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n,int k){
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			m++;
		}
	}
	if(m>0){
	    cout << "1" << endl;
    }
    else cout << "-1" << endl;
}
int main(){
	int t,k,n,a[100000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		xuat(a,n,k);
	}
}
