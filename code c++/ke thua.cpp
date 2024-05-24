#include <bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		char ten[32];
		long namsinh;
		int gioitinh;
	protected:
		int id;
	public:
		nhap();
		xem();
};
class SinhVien: protected Nguoi{
	private:
	    char lop[32];
	public:
		void sua();
};
void SinhVien::sua(){
	lop="D12";
	id=2;
//	namsinh=1990;
	xem();
}
int main(){
	SinhVien sv;
	sv.id=3;
	sv.xem();
	sv.namsinh=1999;
	sv.sua();
//	Nguoi n1;
//	n1=sv;
//	sv=n1;
}
