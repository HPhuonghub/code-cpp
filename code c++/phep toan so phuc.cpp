#include <bits/stdc++.h>
using namespace std;
typedef struct SoPhuc{
	int thuc,ao;
};
SoPhuc binh_phuong_tong(SoPhuc a,SoPhuc b){
	SoPhuc C;
	int c=a.thuc+b.thuc;
	int d=a.ao+b.ao;
	C.thuc=c*c-d*d;
	C.ao=2*c*d;
	return C;
}
void hien_thi(SoPhuc C){
	cout << C.thuc << " + " << C.ao << "i";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
