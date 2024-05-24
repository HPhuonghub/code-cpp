#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void duyetmangb(int a[],int b[],int n,int &m){
	m=0;
    b[m]=a[0];
	m++;
	for(int i=1;i<n;i++){
		bool t=true;
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
				t=false;
				break;
			}
		}
		if(t==true){
			b[m]=a[i];
			m++;
		}
	}
}
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
	    }
    }
}
void gan(int b[],int &m){
	int h=b[m-1]-b[0]-m+1;
	cout << h << endl;
}
int main(){
	int t,n,a[1000],b[1000];
	cin >> t;
	while(t--){
		int m;
		cin >> n;
		nhap(a,n);
		duyetmangb(a,b,n,m);
		sapxep(b,m);
		gan(b,m);
	}
}
