#include<iostream>
using namespace std;
void run(){
	int n,t;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++ ){
		cin >> a[i];
	}
	for(int i = 0;i<= 9;i++){
		for(int j = 0; j < n; j++){
		    t = a[j];
		    if( t == i) {
		        cout << i << ' ';
		        break;
		    }
			while(t > 0){
				if( t % 10 == i){
					cout << i << ' ';
					t = -1;
					break;
				}
				t /= 10;
			}
			
			if(t == -1) break;
		}
	}
}
int main(){
    int T;cin >> T;
    while(T--){
        run();
        cout << endl;
    }
}
