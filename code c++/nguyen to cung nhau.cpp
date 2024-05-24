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
int ucln(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    if(a==1) return 1;
    else return 0;
}
int dem(int n){
	int m=0;
	for(int i=1;i<=n;i++){
		if(ucln(n,i)==1){
			m++;
		}
	}
	return m;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(snt(dem(n))==1){
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}
}
