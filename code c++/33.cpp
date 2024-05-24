#include<bits/stdc++.h>
using namespace std;
struct SinhVien{ 
    string ten;
	string lop;
	string ngaythangnam;
	float diem; };
void nhapThongTinSV(SinhVien &a){
    getline(cin,a.ten);
	getline(cin,a.lop);
	cin>>a.ngaythangnam;
	cin>>a.diem;
}
void chuanhoangay(SinhVien &a){
    if(a.ngaythangnam[1]=='/') a.ngaythangnam="0"+a.ngaythangnam;
    if(a.ngaythangnam[4]=='/') a.ngaythangnam.insert(3,"0"); }
void inThongTinSV(SinhVien a){
    chuanhoangay(a);
    cout<<"N20DCCN001"<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaythangnam;
    cout<<" "<< fixed << setprecision(2) << a.diem ; }
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
