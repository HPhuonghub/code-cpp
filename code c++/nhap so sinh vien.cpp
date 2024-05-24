#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef struct {
    int maSV;
    char hoten[20];
    char lop[20];
    float TBTHCS2;
    float TBMC;
} SinhVien;
void nhap1Sv(SinhVien &sv){
    cin >> sv.maSV;
    cin.ignore();
    gets(sv.hoten);
    cin >> sv.lop;
    cin >> sv.TBTHCS2;
    cin >> sv.TBMC;
}
void nhapNhieuSv(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
    	cout<<"Sinh vien thu "<<i+1<<endl;
        nhap1Sv(a[i]);
    }
}
/*int Tongluong(NhanVien nv){
    int sum;
    sum = nv.luong * nv.heSoLuong + nv.phucap;
    return sum;
}*/
void xuat1Nv(SinhVien sv){
    cout <<"MaNV: "<< sv.maSV << endl;
    cout <<"Name: "<< sv.hoten << endl;
    //cout <<"Tong luong: "<<Tongluong(nv)<<endl;
}
/*void LuongMax(NhanVien a[], int n){
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
}*/
int main(){
	int n;
    cout << "Nhap so Sinh vien: ";
    cin >> n;
    //NhanVien *a = new NhanVien[n];
    SinhVien a[n];
    nhapNhieuSv(a,n);
    //cout << "Nhan vien co luong cao nhat: "<< endl;
    //LuongMax(a,n);
    cout << endl;
    //cout << "nhan vien co luong nho nhat: "<< endl;
    //LuongMin(a,n);
    //delete []a;
}
