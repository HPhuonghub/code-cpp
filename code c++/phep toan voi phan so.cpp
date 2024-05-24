#include <bits/stdc++.h>
using namespace std;
typedef struct PhanSo{
	long long tu,mau;
};
void process(PhanSo a, PhanSo b){
	PhanSo c,d,h;
	long long e=(a.tu*b.mau+b.tu*a.mau);
	long long f=a.mau*b.mau;
	long long gcd=__gcd(e,f);
	c.tu=e/gcd,c.mau=f/gcd;
	d.tu=c.tu*c.tu,d.mau=c.mau*c.mau;
	cout << d.tu << "/" << d.mau << " ";
	long long n=(a.tu*b.tu*d.tu);
	long long m=(a.mau*b.mau*d.mau);
	long long gcd1=__gcd(n,m);
	h.tu=n/gcd1,h.mau=m/gcd1;
	cout << h.tu << "/" << h.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}