#include <iostream>
#include <math.h>
using namespace std;

long long Tong(long long n){
    if(n>pow(10,12)) return 0;
    long long s=1;
	for(long long i=2;i<=sqrt(n);i++){
	    if(n%i==0){
		    s=s+i;
			if(i!=(n/i)){
			    s=s+n/i;
			}
		}
	}
	return s;
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n==Tong(n)){
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
}

