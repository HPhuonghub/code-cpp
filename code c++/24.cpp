#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long a[n+1];
		long min = 10000, check = 1;
		for(long i = 0; i < n; i++){
			cin >> a[i];
		}
		int location, location1;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(abs(a[i] + a[j]) < min){
					min = abs(a[i] + a[j]);
					location = i;
					location1 = j;
				}
			}
		}
		cout << a[location] + a[location1] << endl;
	}
}
