#include <iostream>
#include <math.h>
using namespace std;

int snt(long long n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b,i=2,m=0;
		cin >> a >> b;
		while(i*i<=b&&a<=i*i){
			if(snt(i)){
				m++;
			}
			i++;
		}
		cout << m << endl;
	}
}
