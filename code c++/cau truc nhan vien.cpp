#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,sinh,dc,ky,mst;
};
void nhap(NhanVien &a){
	getline(cin,a.ten);
	cin >> a.gt;
	cin >> a.sinh;
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.mst;
	cin >> a.ky;
}
void ChuanHoaSinh(NhanVien &a){
	if(a.sinh[1]=='/') a.sinh="0"+a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void ChuanHoaky(NhanVien &a){
	if(a.ky[1]=='/') a.ky="0"+a.ky;
	if(a.ky[4]=='/') a.ky.insert(3,"0");
}
void in(NhanVien &a){
	ChuanHoaSinh(a);
	ChuanHoaky(a);
	cout << "00001" << " " << a.ten << " " << a.gt << " " << a.sinh << " ";
	cout << a.dc << " " << a.mst << " " << a.ky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
