#include <bits/stdc++.h>
using namespace std;
typedef struct ThoiGian{
	int gio,phut,giay;
};
void nhap(ThoiGian &a){
	cin >> a.gio >> a.phut >> a.giay;
}
void sapxep(ThoiGian ds[],int t){
	for(int i=0;i<t-1;i++){
		for(int j=i+1;j<t;j++){
			int a=60*60*ds[i].gio+ds[i].phut*60+ds[i].giay;
			int b=60*60*ds[j].gio+ds[j].phut*60+ds[j].giay;
			if(a>b){
				ThoiGian ds1=ds[i];
				ds[i]=ds[j];
				ds[j]=ds1;
			}
		}
	}
}
void inds(ThoiGian ds[],int t){
	for(int i=0;i<t;i++){
		cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
	}
}
int main(){
	int t;
	ThoiGian ds[5000];
	cin >> t;
	for(int i=0;i<t;i++){
		nhap(ds[i]);
	}
	sapxep(ds,t);
	inds(ds,t);
}