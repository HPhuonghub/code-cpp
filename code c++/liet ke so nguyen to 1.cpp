#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n<2)
	    return 0;
	int a=sqrt(n);
	for(int i=2;i<=a;i++){
		if(n%i==0){
			return 0;
		}
	}
    return 1;
}
int main()
{
	int a,b,min,max;
	cin >> a >> b;
	if(a<b){
		min=a;
		max=b;
	}
	else{
		min=b;
		max=a;
	}
	for(int i=min;i<=max;i++){
	    if(snt(i)==1){
	    	cout << i << " ";
	    }
	}
}

