#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int m=1;
	while(1){
		int b=1;
		for(int i=0;i<n;i++){
			if(a[i]==m){
				b=0;
				break;
			}
		}
		if(b==1){
			cout << m;
			break;
	    }
		else{
			m++;
		}
	}
	cout << endl;
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
