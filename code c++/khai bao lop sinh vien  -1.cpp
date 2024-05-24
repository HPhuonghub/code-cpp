#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	friend void ChuanHoaSinh(SinhVien& );
	private:
		string ten,lop,sinh;
		float diem;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap(){
	getline(cin,ten);
	getline(cin,lop);
	getline(cin,sinh);
	cin >> diem;
}
void SinhVien::xuat(){
	if(sinh[1]=='/') sinh="0"+sinh;
	if(sinh[4]=='/') sinh.insert(3,"0");
	cout << "B20DCCN001 " << ten << " " << lop  << " " << sinh << " ";
	cout << fixed << setprecision(2) << diem;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
