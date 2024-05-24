#include<iostream>
using namespace std;
int main(){
	int m;
	long long t,n;
	cin >> m;
	while(m--){
	    cin >> n;
	    long long a[n];
	    for(long long i = 0;i <n; i++){
		    cin >> a[i];
		    if(a[i]==0){
		    	cout << "0 ";
		    }
	    }
	    
	    for(long long i = 0;i<= 9;i++){
		    for(long long j = 0; j < n; j++){
			    t = a[j];
			    while(t > 0){
				    if( t % 10 == i){
					    cout << i << " ";
					    t = i;
					    break;
				    }
				    t /= 10;
			    }
			    if(t == i) break;
		    }
	    }
	    cout << endl;
    }
}
