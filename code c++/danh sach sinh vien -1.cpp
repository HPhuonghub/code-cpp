#include <bits/stdc++.h>
using namespace std;
int r=0;
struct SinhVien{
	string ten,lop,sinh;
	float diem;
};
struct SinhVien ds[50];
void nhap1sv(SinhVien &a){
	if(r==0){
		cin.ignore();
	}
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.sinh);
	cin >> a.diem;
}
void nhap(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		nhap1sv(ds[i]);
	}
}
void ChuanHoaSinh(SinhVien &a){
	if(a.sinh[1]=='/') a.sinh="0"+a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void in(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		ChuanHoaSinh(ds[i]);
		if(i<9){
			cout << "B20DCCN00" << i+1 << " " << ds[i].ten << " ";
			cout << ds[i].lop << " " << ds[i].sinh << " ";
			cout << setprecision (2) << fixed << ds[i].diem << endl;
		}
		else{
			cout << "B20DCCN0" << i+1 << " " << ds[i].ten << " ";
			cout << ds[i].lop << " " << ds[i].sinh << " ";
			cout << setprecision (2) << fixed << ds[i].diem << endl;
		}
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
