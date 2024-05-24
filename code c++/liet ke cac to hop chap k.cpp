#include<iostream>
#include<math.h>
using namespace std;

int n=5;
int k=3;
int X[100];

void xuat(int A[], int n) {
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout << endl;
}

void Try_combination(int i){
   for(int j=X[i - 1] + 1; j<=n-k+ i; j++){ // các kh? nang c?a X[i]
        X[i] = j;
        if (i == k){
            xuat(X, k);
        }
        else{
            Try_combination(i+1);
        }
   }

}

int main(){
    X[0] = 0;
    Try_combination(1);
    return 0;
}
