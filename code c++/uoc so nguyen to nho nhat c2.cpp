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
void uoc(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout << i << " ";
			break;
		}
	}
}
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		for(long long i=1;i<=n;i++){
			if(i==1||snt(i)==1){
				cout << i << " ";
			}
			else{
				uoc(i);
			}
		}
		cout << endl;
	}
}
