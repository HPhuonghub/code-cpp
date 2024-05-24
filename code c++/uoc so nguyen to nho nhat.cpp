#include <iostream>
#include <math.h>
using namespace std;

void uoc(long long n){
    long long count=0;
	for(int i=2;i<=sqrt(n);i++){
	    if(n%i==0){
		    count++;
			cout << i << " ";
			break;
		}
	}
	if(count==0){
	    cout << n << " ";
    }
}
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		for(long long i=1;i<=n;i++){
			uoc(i);
		}
		cout << endl;
	}
}
