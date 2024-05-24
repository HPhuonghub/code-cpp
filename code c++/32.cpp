#include <bits/stdc++.h>
using namespace std;
struct MonHoc{
	string ma,ten;
	int sotc;
	float diemcc,diemkt;
};
struct SinhVien{
	string masv,hoten,lop;
	int k;
	struct MonHoc *dsmh;
};
void Nhap1Mon(MonHoc mh)
void NhapSinhVien(SinhVien &sv){
	cin.ignore();
	getline(cin,sv.masv);
	getline(cin,sv.hoten);
	getline(cin,sv.lop);
	int k;
	cin >> k;
	
}
MonHoc find(MonHoc dsmh[],int n,int ma){
	MonHoc kq;
	kq=-1;
	for(int i=0;i<n;i++){
		if(maMH==dsmh[i].)
	}
}
void NhapNhieuSV(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		NhapSinhVien(a[i]);
	}
}
int main(){
	int n,m;
	cout << "Nhap so sinh vien : " << endl;
	cin >> n;
	MonHoc *dsmh = new MonHoc[m];
	SinhVien *sv = new SinhVien[n];
	return 0;
}
