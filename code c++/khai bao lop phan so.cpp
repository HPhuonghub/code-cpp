#include<bits/stdc++.h>
using namespace std;

class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(long long tu,long long mau);
		friend ostream& operator <<(ostream& out,PhanSo);
		friend istream& operator >>(istream& in,PhanSo&);
		void rutgon();
};
PhanSo::PhanSo(long long tu,long long mau){
	this->tu=tu;
	this->mau=mau;
}
ostream& operator <<(ostream& out,PhanSo p){
	out<<p.tu<<"/"<<p.mau;
	return out;
}
istream& operator >>(istream& in,PhanSo &p){
	in>>p.tu>>p.mau;
	return in;
}

void PhanSo::rutgon(){
	long long uoc= __gcd(this->tu,this->mau);
	this->tu=tu/uoc;
	this->mau=mau/uoc;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
