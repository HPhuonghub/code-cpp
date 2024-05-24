#include <bits/stdc++.h>
using namespace std;
int r=0;
struct SinhVien{
	string ten,lop,sinh;
	float diem;
	int ma;
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
	int dem=1;
	for(int i=0;i<N;i++){
		ds[i].ma=dem;
		nhap1sv(ds[i]);
		dem++;
	}
}
void sapxep(SinhVien ds[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].diem<ds[j].diem){
				SinhVien ds1=ds[i];
				ds[i]=ds[j];
				ds[j]=ds1;
			}
		}
	}
}
void ChuanHoaSinh(SinhVien &a){
	if(a.sinh[1]=='/') a.sinh="0"+a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void ChuanHoaTen(SinhVien &a){
	stringstream s(a.ten);
	string word;
	vector<string> tu;
	while(s>>word){
		transform(word.begin(),word.end(),word.begin(),::tolower);
		tu.push_back(word);
	}
	for(int i=0;i<tu.size();i++){
		char t=tu[i][0]-32;
		cout << t;
		tu[i].erase(tu[i].begin() + 0);
		cout << tu[i];
		if(i<tu.size()-1){
			cout << " ";
		}
	}
}
void in(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		ChuanHoaSinh(ds[i]);
		if(ds[i].ma<10){
			cout << "B20DCCN00" << ds[i].ma << " ";
			ChuanHoaTen(ds[i]);
			cout << " " << ds[i].lop << " " << ds[i].sinh << " ";
			cout << setprecision (2) << fixed << ds[i].diem << endl;
		}
		else{
			cout << "B20DCCN0" << ds[i].ma << " ";
			ChuanHoaTen(ds[i]);
			cout << " " << ds[i].lop << " " << ds[i].sinh << " ";
			cout << setprecision (2) << fixed << ds[i].diem << endl;
		}
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
