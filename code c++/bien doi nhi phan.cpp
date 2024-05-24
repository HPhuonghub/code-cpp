#include<iostream>
using namespace std;
void run(){
	int c,h,t;
	cin >> h >> c;
	int a[h][c],b[h][c];
	for(int i = 0; i < h; i++){
	    for(int j = 0; j < c; j++){
	        a[i][j] = 0;
	        cin >> b[i][j];
	    }
	}
	for(int i = 0; i < h; i++){
	    for(int j = 0;j < c;j++){
	        if(b[i][j] == 1){
	            for(int k = 0;k < h;k++) a[k][j] = 1;
	            for(int k = 0;k < c;k++) a[i][k] = 1;
	        }
	    }
	}
	for(int i = 0; i < h; i++){
	    for(int j = 0; j < c; j++){
	        cout << a[i][j] << ' ';
	    }
	    cout << endl;
	}
}
int main(){
    int T;cin >> T;
    while(T--){
        run();
    }
}
