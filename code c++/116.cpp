#include<bits/stdc++.h>
using namespace std;
int n,k,x[100],a[100],ok=0;
void sinh(){
	int i=k;
	while (a[i]==n-k+i){
		i--;
	}
	if (i>0 ) {
		a[i]=a[i]+1;
		for (int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else {
		ok=1;
	}
}
int main(){
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>x[i];
		for (int j=0;j<i;j++){
			if (x[i]==x[j]){
				i--;
				n--;
			}
		}
	}
	sort(x,x+n);
	for (int i=1;i<=k;i++){
		a[i]=i;
	}
	while (!ok){
		for (int i=1;i<=k;i++){
			cout<<x[a[i]-1]<<" ";
		}
		cout<<endl;
		sinh();
	}
}