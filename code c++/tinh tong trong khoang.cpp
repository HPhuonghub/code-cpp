#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int main(){
	int t,a[10000],l,r,n,q;
	cin >> t;
	while(t--){
		cin >> n >> q;
		nhap(a,n);
		for(int i=1;i<=q;i++){
			cin >> l >> r;
			int s=0;
			for(int j=l-1;j<=r-1;j++){
				s=s+a[j];
			}
			cout << s << endl;
		}
	}
}
