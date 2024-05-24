#include <iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
void xoa(int a[],int &n){
	for(int i=0;i<n;i++){
		if(a[i]==5){
			for(int j=i;j<n-1;j++){
		        a[j]=a[j+1];
		    }
		    n--;
		    i--;
        }
        
    }
}
int main(){
	int n,a[100];
	cin >> n;
	nhap(a,n);
	xoa(a,n);
	xuat(a,n);
}
	
