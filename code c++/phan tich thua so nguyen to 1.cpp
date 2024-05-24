#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=n;i++){
			if(n%i==0){
			int m=0;
			while(n%i==0){
				m++;
				n=n/i;
			}
			cout << i << " " << m << " ";
		}}
		cout << endl;
	}
}
