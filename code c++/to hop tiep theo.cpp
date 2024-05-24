#include <bits/stdc++.h>
using namespace std;
int a[35],b[35], n, k, OK = 0;
void in(){
	int h=0;
	int m=k;
	for(int i=1;i<=k;i++){
		if(a[i]==n-k+i) m--;
	}
	if(m==0){
		cout << k;
		OK=1;
	}
	else{
		for(int i=1;i<=k;i++){
			for(int j=1;j<=k;j++){
				if(a[i]==b[j]) h++;
			}
		}
		cout << k-h;
		OK=1;
	}
}
void sinh(){
	int i=k;
	while(a[i] == n-k+i) i--;
	if(i==0) OK = 1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j] = a[j-1] +1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=k;i++){
			cin >> a[i];
			b[i]=a[i];
		}
		while(!OK){
			sinh();
			in();
		}
		OK=0;
		cout << endl;
	}
}