#include<iostream>
using namespace std;
typedef struct{
	char maSV[20];
	char name[20];
	char lop[20];
	float tincs,c;
}Sinhvien;
void nhap1SV(Sinhvien &sv){
	cin.ignore();
	gets(sv.maSV);
    gets(sv.name);
    gets(sv.lop);
    cin >> sv.tincs;
    cin >> sv.c;
}
void nhapNSV(Sinhvien a[], int n){
    for(int i = 0; i < n; i++){
    	cout<<"Sinh vien thu "<<i+1<<endl;
        nhap1SV(a[i]);
    }
}
float diemTB(Sinhvien sv){
	float tb;
	tb=(sv.tincs+sv.c)/2;
	return tb;
}
void xuatSV(Sinhvien sv){
	cout<<"maSV: "<<sv.maSV<<endl;
	cout<<"name: "<<sv.name<<endl;
	cout<<"lop: "<<sv.lop<<endl;
	//cout<<"Diem TBC++: "<<diemTB(sv)<<endl;
}


void diemTB(Sinhvien a[], int n){
	for (int i=0;i<n;i++){
		if (a[i].c>=7)  xuatSV(a[i]);
	}
}
int main(){
	int n;
	cout<<"Nhap so sinh vien "<<endl;
	cin>>n;
	Sinhvien a[n];
	nhapNSV(a,n);
	cout<<"Sinh vien co diem TBMC++ >= 7: "<<endl;
	diemTB(a,n);
	 
}
