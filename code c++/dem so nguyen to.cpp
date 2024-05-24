#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t,l,r;
	cin >> t;
	while(t--){
		cin >> l >> r;
		int count=0;
		for(int i=l;i<=r;i++){
			if(snt(i)){
				count++;
			}
		}
		cout << count << endl;
	}
}
