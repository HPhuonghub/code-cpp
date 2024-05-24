#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
	char maso[20];
	char hoten[20];
	int hs,lcb,pc;
};
void nhap(NhanVien &a){
	gets(a.maso);
	gets(a.hoten);
	cin >> a.hs >> a.lcb >> a.pc;
}
void tongluong(NhanVien &a){
	int tong;
	tong=a.lcb*a.hs+a.pc;
	cout << tong;
}
void nhap(Nv nv[]){
	for(int i=0;i<10;i++){
		
	}
}
int main(){
	struct NhanVien Nv;
	NhanVien nv[10];
	nhap(Nv);
	tongluong(Nv);
	delete Nv;
}
