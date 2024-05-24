#include <bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		int maSo;
		char tenN[20];
	public:
		Nguoi();
		Nguoi(int,char[]);
		int getMaSo(){
			return maSo;
		}
};
Nguoi::Nguoi(){
	maSo=0;
	strcpy(tenN,"");
}
Nguoi::Nguoi(int maSoln,char tenln[]){
	maSo=maSoln;
	strcpy(tenN,tenln);
}
class SinhVien: public Nguoi{
	private:
		int namSinh;
	public:
		SinhVien();
		SinhVien(int,char[],int);
		void xem(){
			cout << namSinh << endl;
			cout << getMaSo();
		}
};
SinhVien::SinhVien():Nguoi(){
	namSinh=0;
}
SinhVien::SinhVien(int maSoln1,char tenln1[],int namSinhln):Nguoi(maSoln1,tenln1){
	namSinh=namSinhln;
}
int main(){
	SinhVien sv1(1,"phuong",2002);
	sv1.xem();
	SinhVien sv2;
	SinhVien sv3;
}
