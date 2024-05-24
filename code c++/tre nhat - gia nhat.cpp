#include <bits/stdc++.h>
using namespace std;
typedef struct Nguoi{
	string ten,sinh;
};
void nhap(Nguoi &a){
	cin >> a.ten >> a.sinh;
}
void xuli(Nguoi &a){
	if(a.sinh[2]=='/') a.sinh.erase(a.sinh.begin()+2);
	if(a.sinh[4]=='/') a.sinh.erase(a.sinh.begin()+4);
	for(int i=0;i<4;i++){
		string s;
		s=a.sinh[i];
		a.sinh[i]=a.sinh[i+4];
		a.sinh[i+4]=s[0];
	}
	for(int i=4;i<=5;i++){
		string s;
		s=a.sinh[i];
		a.sinh[i]=a.sinh[i+2];
		a.sinh[i+2]=s[0];
	}
}
void inds(Nguoi ds[],int t){
	int min,max;
	long s[100];
	int n=0;
	for(int i=0;i<t;i++){
		xuli(ds[i]);
		long a=stoi(ds[i].sinh);
		s[n]=a;
		n++;
	}
	long m=0,h=s[0];
	for(int i=0;i<t;i++){
		if(s[i]>m){
			m=s[i];
			max=i;
		}
		if(h>s[i]){
			h=s[i];
			min=i;
		}
	}
	cout << ds[max].ten << endl << ds[min].ten << endl;
}
int main(){
	int t;
	Nguoi ds[100];
	cin >> t;
	for(int i=0;i<t;i++){
		nhap(ds[i]);
	}
	inds(ds,t);
}