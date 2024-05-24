#include <bits/stdc++.h>
using namespace std;
void Xuat_Mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}
void Xoa(int a[], int &n, int vitrixoa){
	for(int i = vitrixoa + 1; i < n; i++){
		a[i - 1] = a[i];
	}
	n--;
}
void Xoa_Phan_Tu_Trung(int a[], int &n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				Xoa(a, n, j);
				i--;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[n];
	}
	Xoa_Phan_Tu_Trung(a, n);
	Xuat_Mang(a, n);
}
