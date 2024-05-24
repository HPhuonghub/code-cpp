#include <iostream>
#include<math.h>
using namespace std;

int dem(int N, int p){
	int dem = 0,j;
	if(N >=1 && N<= pow(10,5)){
		for(int i = 1 ; i <= N; i++){
			j = i;
			while(j % p == 0){
				dem ++;
				j = j / p;
			}
		}
	}
	return dem;
}
int main(){
	int t,N,p;
	cin >> t;
	while(t--){
	    cin >> N >> p;
	    cout << dem(N,p) << endl;
	}
	return 0;
}
