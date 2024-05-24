#include <iostream>
using namespace std;

long long TachSo(long long n){
	long long a=0,c=n;
	int kiemtra=0;
	while(n>0){
		int b=n%10;
		if(b == 4 && kiemtra == 0){
			c=c/10;
			if(c%10==8){
				c=c/10;
				if(c%10==0){
					kiemtra++;
					c=c/10;
				}
			}
		}
	    if(kiemtra==1){
		    kiemtra++;
		    n=c;
		    b=n%10;
	 	    a=a*10+b;
		    n=n/10;
		    c=c/10;
	    }
	    else{
		    a=a*10+b;
		    c=n;
		    n=n/10;
		    c=c/10;
	    }
    }
	return a;
}
void xuat(long long n){
	while(n>0){
		int b;
		b=n%10;
		cout << b;
		n=n/10;
	}
}
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		long long m=TachSo(n);
		xuat(m);
		cout << endl;
	}
}
