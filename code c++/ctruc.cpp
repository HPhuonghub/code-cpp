#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef struct {
    int maNV;
    char name[20];
    int heSoLuong;
    int luong;
    int phucap;
} NhanVien;
void nhap1Nv(NhanVien &nv){
    cin >> nv.maNV;
    gets(nv.name);
    cin >> nv.heSoLuong;
    cin >> nv.luong;
    cin >> nv.phucap;
}
void nhapNhieuNv(NhanVien a[], int n){
    for(int i = 0; i < n; i++){
    	cout<<"Nhan vien thu "<<i+1<<endl;
        nhap1Nv(a[i]);
    }
}
int Tongluong(NhanVien nv){
    int sum;
    sum = nv.luong * nv.heSoLuong + nv.phucap;
    return sum;
}
void xuat1Nv(NhanVien nv){
    cout <<"MaNV: "<< nv.maNV << endl;
    cout <<"Name: "<< nv.name << endl;
    cout <<"Tong luong: "<<Tongluong(nv)<<endl;
}
void LuongMax(NhanVien a[], int n){
    int max = 0,index=0;
    for(int i = 0; i < n; i++){
        if(Tongluong(a[i]) > max){
        	max	= Tongluong(a[i]) ;
        	index =i;	
		}
    }
    xuat1Nv(a[index]);
}
void LuongMin(NhanVien a[], int n){
    int min = 999999,index=0;
    for (int i = 0; i < n; i++){
    	if(Tongluong(a[i]) < min){
    		min	= Tongluong(a[i]) ;
        	index =i;	
		}
    }
    xuat1Nv(a[index]);
}
int main(){
	int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;
    NhanVien *a = new NhanVien[n];
    nhapNhieuNv(a,n);
    cout << "Nhan vien co luong cao nhat: "<< endl;
    LuongMax(a,n);
    cout << endl;
    cout << "nhan vien co luong nho nhat: "<< endl;
    LuongMin(a,n);
    delete []a;
}
