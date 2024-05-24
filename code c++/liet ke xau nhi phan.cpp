#include<iostream>
#include<math.h>
using namespace std;
 
/*void gen_next_bit_string(int A[], int n) {
    ++A[n - 1];
    for (int i = n - 1; i > 0; --i) {
        if (A[i] > 1) {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}
*/
void gen(int A[], int n){
    int i = n-1;
    while (A[i] == 1 && i > 0)
    {
        A[i] = 0;
        i = i - 1;
    }
    A[i] = 1;
}

void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i];
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) A[i] = 0;
    for (int i = 0; i < pow(2, n); i++) {
        xuat(A, n);
        gen(A, n);
        cout << " ";
    }
    cout << endl;
    }
}
