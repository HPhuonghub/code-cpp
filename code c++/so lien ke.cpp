#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n>=10){
		    int dem=0,m,k=0;
		    m=n%10;
		    n=n/10;
		    while(n>0){
			    int h;
			    h=n%10;
			    n=n/10;
			    if(m>h){
				    if(m-h==1){
				        dem++;
				    }
			    }
			    if(m<h){
				    if(h-m==1){
				        dem++;
				    }
			    }
			    m=h;
			    k++;
		    }
		    if(dem==k){
			    cout << "YES" << endl;
		    }
		    else{
			    cout << "NO" << endl;
		    }
		}
	}
}
