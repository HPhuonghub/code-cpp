#include <bits/stdc++.h>
using namespace std;
int r=0;
struct NhanVien{
	string ten,gt,sinh,dc,ky,mst;
};
struct NhanVien ds[50];
void nhap(NhanVien &a){
	if(r==0){
		cin.ignore();
	}
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.sinh);
	getline(cin,a.dc);
	getline(cin,a.mst);
	getline(cin,a.ky);
	r=1;
}
void ChuanHoaSinh(NhanVien &a){
	if(a.sinh[1]=='/') a.sinh="0"+a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void ChuanHoaky(NhanVien &a){
	if(a.ky[1]=='/') a.ky="0"+a.ky;
	if(a.ky[4]=='/') a.ky.insert(3,"0");
}
void inds(NhanVien ds[],int N){
	for(int i=0;i<N;i++){
		ChuanHoaSinh(ds[i]);
	    ChuanHoaky(ds[i]);
	    if(i<9){
	    	cout << "0000"<< i+1 << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].sinh << " ";
	        cout << ds[i].dc << " " << ds[i].mst << " " << ds[i].ky << endl;
		}
		else{
	        cout << "000"<< i+1 << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].sinh << " ";
	        cout << ds[i].dc << " " << ds[i].mst << " " << ds[i].ky << endl;
	    }
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
