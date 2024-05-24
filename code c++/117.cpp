#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[100],OK=0;

void sinh(){
	int i=k;
	while(a[i] == n-k+i) i--;
	if(i==0) OK = 1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j] = a[j-1] +1;
	}
}
bool cmp(string a,string b){
	return a[0]<b[0];
}
int main(){
	cin >> m >> k;
	cin.ignore();
	string s;
	getline(cin,s);
	stringstream c(s);
	string word;
	vector<string> b;
	while(c >> word){
		int dem=0;
		for(int i=0;i<b.size();i++){
			if(b[i]==word) dem++;
		}
		if(dem==0) b.push_back(word);
	}
	sort(b.begin(),b.end(),cmp);
	n=b.size();
	for (int i=1;i<=k;i++){
		a[i]=i;
	}
	while (!OK){
		for (int i=1;i<=k;i++){
			cout<<b[a[i]-1]<<" ";
		}
		cout<<endl;
		sinh();
	}
}