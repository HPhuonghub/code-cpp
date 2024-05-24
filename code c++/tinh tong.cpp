#include<iostream>
using namespace std;

long long solon(long long n){
	long long a = 0 , k=1;
	while(n>0){
		int h = n % 10;
		if (h == 5) h = 6;
		a = a + h*k;
		k=k*10;
		n=n/10;
	}
	return a;
}
long long sobe(long long n){
	long long a = 0 , k=1;
	while(n>0){
		int h = n % 10;
		if (h == 6) h = 5;
		a = a + h*k;
		k=k*10;
		n=n/10;
	}
	return a;
}
int main(){
	int t;
	long long n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		long long h = sobe(n)+ sobe(m),k = solon(n)+ solon(m);
		cout << h << " "<< k;
		cout << endl;
		
	}
	return 0;
}
