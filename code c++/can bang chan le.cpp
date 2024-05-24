#include <iostream>
#include<math.h>
using namespace std;

int cb(int n){
	int a=0,m;
	while(n>0){
		m=n%10;
		n=n/10;
		if(m%2==0){
			a++;
		}
		else{
			a--;
		}
	}
	if(a==0){
		return 1;
	}
	else {
	    return 0;
}}
int main()
{
	int n,dem=0;
	cin >> n;
	int a=pow(10,n-1);
	int b=pow(10,n);
	for(int i=a;i<b;i++){
		if(cb(i)==1){
			cout << i << " ";
			dem++;
		}
		if(dem==10){
			cout << endl;
			dem=0;
		}
	}
}
