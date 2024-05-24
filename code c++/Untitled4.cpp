#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int main(){
	int t,n,d,a[100000];
	cin >> t;
	while(t--){
		for(int i=0;i<n;i++){
		    cin>>a[i];
		}
		for(int i=d-1;i<n;i++){
			cout << a[i] << " ";
		}
		for(int i=0;i<d;i++){
			cout << a[i] << " ";
		}
	}
}
