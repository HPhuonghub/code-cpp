#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		long long s=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				s=s+i;
				if((n/i)!=i){
					s=s+n/i;
				}
			}
		}
		cout << s << endl;
	}
}
