#include<iostream>
#include<math.h>
using namespace std;

int X[100];
int n=3;
int unused[100];

void xuat(int A[], int n) {
    for (int i = 1; i <= n; i++)
        cout <<" "<<A[i];
    cout << endl;
}

void Try_i(int i){
   for (int j=1; j<=n; j++){ // cac gia tri co the xay ra
        if (unused[j] == true) { // kiem tra dk co duoc chap nhan hay khong ( da duoc su dung cho phan tu khac chua)
            X[i] = j;
            unused[j] = false;  //gia tri nay da duoc gan roi
            if ( i ==n){
                xuat(X, n); // neu da xet het tat ca phan tu thi dua ra day hoan vi
            }
            else{
                Try_i(i+1); // neu chua xet het xet den phan tu i+1
            }
            unused[j] = true; // khoi tao lai de xet day tiep theo
        }
    }
}

int main(){
    for(int i=1; i<=n; i++){
        unused[i] = true; // khoi tao mang logic , cac vi tri deu bang True vi chua dc sd
    }
    Try_i(1);
    return 0;
}
