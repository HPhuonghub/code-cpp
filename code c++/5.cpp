#include <bits/stdc++.h>
using namespace std;
typedef struct PhanSo{
	long long ts,ms;
};
void nhap(PhanSo &p){
	cin >> p.ts >> p.ms;
}
PhanSo tong(PhanSo a,PhanSo b){
	PhanSo t;
	long long c=(a.ts*b.ms+b.ts*a.ms);
	long long d=a.ms*b.ms;
	long long gcd=__gcd(c,d);
	t.ts=c/gcd,t.ms=d/gcd;
	return t;
}
void in(PhanSo t){
    cout << t.ts << "/" << t.ms;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
