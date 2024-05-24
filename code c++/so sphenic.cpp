#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem=0,i=2;
		for(i;i<=n;i++){
			if(snt(i)==1&&n%i==0){
				n=n/i;
			    dem++;
			}
		}
		if(dem==3&&n==1){
		    cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
}
