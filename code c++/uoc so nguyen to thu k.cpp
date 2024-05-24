#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,h=0,i=2,m=-1;
		cin >> n >> k;
		while(n>1){
			while(n%i==0){
				h++;
				n=n/i;
				if(h==k){
					m=i;
				}
			}
			i++;
		}
		cout << m << endl;
	}
}
