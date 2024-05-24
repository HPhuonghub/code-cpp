#include <iostream>
using namespace std;

void nhap(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==n-1){
				cout << a[i][j] << " ";
			}
			else{
				if(j==0||j==n-1){
				    cout << a[i][j] << " ";
			    }
			    else{
			    	cout << "  ";
				}
			}
	    }
	    cout << endl;
    }
}
int main(){
	int t,a[100][100],n;
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuat(a,n);
	}
}
