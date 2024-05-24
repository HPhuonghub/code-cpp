#include <iostream>
using namespace std;
void run(){
    int m,n;
    cin>> m>>n;
    int a[m][n];
    for(int i = 0;i<m;i++){
        for(int j=0; j<n;j++) cin>>a[i][j];
    }
    int s=m*n;int b[s];
    int i=0,j=0,t=0;
    while(t<s){
        while(j<n){
            if(a[i][j]==-1) {j--;break;}
            b[t]=a[i][j];t++;
            a[i][j]=-1;j++;
        }
        if(j==n) j--;i++;
        while(i<m){
            if(a[i][j]==-1) {i--;break;}
            b[t]=a[i][j];t++;
            a[i][j]=-1;i++;
        }
        if(i==m) i--;j--;
        while(j>=0){
            if(a[i][j]==-1) {j++;break;}
            b[t]=a[i][j];t++;
            a[i][j]=-1;j--;
        }
        if(j==-1) j++;i--;
        while(i>=0){
            if(a[i][j]==-1) {i++;break;}
            b[t]=a[i][j];t++;a[i][j]=-1;i--;
        }
        j++;
    }
    while(s--){cout << b[s]<<' ';}
    cout << endl;
}
int main(){
    int T;
    cin >>T; 
    while(T--){
        run();
    }
    return 0;
}
