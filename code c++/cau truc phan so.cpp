#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long ts,ms;
};
void nhap(PhanSo &p){
	cin >> p.ts >> p.ms;
}
long long UCLN(long long a, long long b){
	while(a*b!=0){
		if(a>b){
			a=a%b;
		}
		else b=b%a;
	}
	return a+b;
}
void rutgon(PhanSo &p){
	long long s;
	s=UCLN(p.ts,p.ms);
	p.ts=p.ts/s;
	p.ms=p.ms/s;
}
void in(PhanSo p){
	cout << p.ts << "/" << p.ms;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
