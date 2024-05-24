#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string hoten,lop,sinh;
	float d;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.hoten);
	cin >> a.lop;
	cin >> a.sinh;
	cin >> a.d;
}
void ChuanHoaSinh(SinhVien &a){
	if(a.sinh[1]=='/') a.sinh="0"+a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void inThongTinSV(SinhVien &a){
	ChuanHoaSinh(a);
	cout << "N20DCCN001" << " " << a.hoten << " " << a.lop << " ";
    cout << a.sinh << " ";
	cout << setprecision (2) << fixed << a.d;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
