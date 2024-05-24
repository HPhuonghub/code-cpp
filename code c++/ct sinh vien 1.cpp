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
void NhapSinhVien(SinhVien &a){
	getline(cin,a.masv);
	getline(cin,a.hoten);
	getline(cin,a.lop);
}
int main(){
	int n,m;
	cin >> n >> m;
	struct SinhVien a[n];
	for(int i=0;i<n;i++){
		NhapSinhVien(a[i]);
	}
	return 0;
}
