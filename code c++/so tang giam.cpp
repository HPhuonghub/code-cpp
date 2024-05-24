#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	int a=sqrt(n);
	if(n<2){
		return 0;
	}
	for(int i=2;i<=a;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int giam(int n){
	int m,dem=0,dem1=0,k=0;
	    m=n%10;
	    n=n/10;
	while(n>0){
	    int h;
		    h=n%10;
		    n=n/10;
		if(m<h){
			dem++;
		}
		if(m>h){
			dem1++;
		}
		m=h;
		k++;
	}
	if(dem==k||dem1==k){
		return 1;
	}
	else{
		return 0;
	}
}	
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem=0,m=0,a=1,b=10;
		while(m<=(n-2)){
			a=a*10;
			b=b*10;
			m++;
		}
		for(int i=a;i<b;i++){
			if(giam(i)==1){
			    if(snt(i)==1){
				    dem++;
			    }
			}
		}
		cout << dem << endl;
	}
}
