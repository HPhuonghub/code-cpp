#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[100];
vector<string> b;
void Try(int i,int k){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for (int i=1;i<=k;i++){
				cout<<b[a[i]-1]<<" ";
			}
			cout << endl;
		}
		else Try(i+1,k);
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
	Try(1,k);
}