#include <iostream>
using namespace std;

void nhap(long long a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(long long a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			cout << a[i] << " ";
		}
		else{
			dem++;
		}
	}
	for(int i=0;i<dem;i++){
		cout << "0 ";
	}
	cout << endl;
}
int main(){
	int t,n;
	long long a[100000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
	}
}
