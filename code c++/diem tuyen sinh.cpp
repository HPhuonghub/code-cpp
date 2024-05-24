#include <bits/stdc++.h>
using namespace std;
typedef struct Ts{
	string ten,dt;
	float diem,kv;
};
void nhap(Ts &a){
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.diem;
	cin >> a.kv;
}
string chuanhoa(string &a){
	string x,s=" ";
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='B'){
			a[i]=a[i]+32;
		}
	}
	stringstream ss(a);
	vector<string> v;
	while(ss >> x){
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++){
		v[i][0]-=32;
		s+=v[i]+" ";
	}
	s.erase(s.size()-1);
	return s;
}
void xuat(Ts ds[],int t){
	for(int i=0;i<t;t++){
		ds[i].ten=chuanhoa(ds[i].ten);
		if(i<10){
			cout << "TS0" << i << " " << ds[i].ten << " ";
			if(ds[i].kv==1){
				ds[i].diem+=1.5;
			}
			if(ds[i].kv==2){
				ds[i].diem+=1;
			}
			if(ds[i].kv==3){
				ds[i].diem+=0;
			}
			if(ds[i].dt!="Kinh"){
				ds[i].diem+=1.5;
			}
			cout << fixed << setprecision(1) << ds[i].diem << " ";
			if(ds[i].diem<20.5){
				cout << "Truot" << endl;
			}
			else{
				cout << "Do" << endl;
			}
		}
		else{
			cout << "TS" << i << " " << ds[i].ten << " ";
			if(ds[i].kv==1){
				ds[i].diem+=1.5;
			}
			if(ds[i].kv==2){
				ds[i].diem+=1;
			}
			if(ds[i].kv==3){
				ds[i].diem+=0;
			}
			if(ds[i].dt!="Kinh"){
				ds[i].diem+=1.5;
			}
			cout << fixed << setprecision(1) << ds[i].diem << " ";
			if(ds[i].diem<20.5){
				cout << "Truot" << endl;
			}
			else{
				cout << "Do" << endl;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	Ts ds[100];
	for(int i=0;i<t;i++){
		nhap(ds[i]);
	}
	xuat(ds,t);
}