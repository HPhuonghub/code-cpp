#include<iostream>
using namespace std;

int main(){
	int t,a[1000000],n,d;
	cin >> t;
	while(t--){
		cin >> n >> d;
		for(int i=0;i<n;i++){
			cin >> a[i];
	    }
	    for(int j=d;j<n;j++){
		    cout << a[j] << " ";
	    }
	    for(int m=0;m<d;m++){
		    cout << a[m] << " ";
	    }
	    cout << endl;
	}
}
