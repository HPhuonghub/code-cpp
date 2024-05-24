#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void fibo(int n){
	if(n==0){
		cout << n << " ";
	}
	int f1=0,f2=1,f=1;
	while(f<n){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	if(f==n){
		cout << n << " ";
    }
}
int main(){
	int t,a[100],n;
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n;i++){
			fibo(a[i]);
		}
		cout << endl;
	}
}
