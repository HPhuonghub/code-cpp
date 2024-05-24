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
	int t;
	cin >> t;
	while(t--){
		int n,i=2;
		cin >> n;
		while(i*i<=n){
			if(snt(i)){
				cout << i*i << " ";
			}
			i++;
		}
		cout << endl;
	}
}
