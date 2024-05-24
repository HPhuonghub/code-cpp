#include <iostream>
using namespace std;

void nhap(long long a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xuat(long long a[],int n){
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
	int t,n;
	long long a[100000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
        xuat(a,n);
        cout << endl;
	}
}
