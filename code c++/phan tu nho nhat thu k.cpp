#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void doicho(int *x,int *y){
	int m=*x;
	*x=*y;
	*y=m;
}
void sapxep(int a[],int n){
	int m;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
}
int main(){
	int t,a[100000],n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
        sapxep(a,n);
        int m=0;
		for(int i=0;i<n;i++){
			m++;
			if(m==k){
				cout << a[i] << endl;
			}
		}
	}
}
