#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	int b=0,c=0,d=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			b++;
		}
		if(a[i]==1){
			c++;
		}
		if(a[i]==2){
			d++;
		}
	}
	for(int i=0;i<b;i++){
		cout << "0 ";
	}
	for(int i=0;i<c;i++){
		cout << "1 ";
	}
	for(int i=0;i<d;i++){
		cout << "2 ";
	}
}
int main(){
	int t,n,a[100000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
		cout << endl;
	}
}
