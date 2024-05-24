#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef struct{
	char maso[20];
	char hoten[20];
	int hs,lcb,pc;
}NhanVien;
void Nhap(NhanVien &nv){
	gets(nv.maso);
	gets(nv.hoten);
	cin >> nv.hs >> nv.lcb >> nv.pc;
}
void NhapNhieuNV(NhanVien a[],int n){
	for(int i=0;i<n;i++){
		Nhap(a[i]);
	}
}
void xuat1Nv(NhanVien nv){
    cout << nv.maso << endl;
    cout << nv.hoten << endl;
    cout << nv.lcb << endl;
    cout << nv.pc << endl;
}
float TongLuong(NhanVien nv){
	float tong;
	tong=nv.lcb*nv.hs+nv.pc;
	cout << tong;
}
void LuongMax(NhanVien a[], int n){
    int max = -1e9;
    for(int i = 0; i < n; ++i){
        if(TongLuong(a[i]) > max) xuat1Nv(a[i]);
    }
}
void LuongMin(NhanVien a[], int n){
    int max = -1e9;
    for(int i = 0; i < n; ++i){
        if(TongLuong(a[i]) > max) xuat1Nv(a[i]);
    }
}
int main(){
	NhanVien *nv = new NhanVien[10];
	for(int i=0;i<10;i++){
	    NhanVien(n[i]);
        TongLuong(n[i]);
	}
	delete []nv;
}
