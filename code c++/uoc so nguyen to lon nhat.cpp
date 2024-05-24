#include<iostream>
#include<math.h>
using namespace std;
int ngto(long n){
    if(n<2) return 0;
    for(int i=2;i<= sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long n,max;
        cin >> n;
        for(long i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(ngto(i)) max=i;
                if (ngto(n/i)){
                    max= n/i;
                    break;
                }
            }
        }
        cout << max << "\n";
    }
}
