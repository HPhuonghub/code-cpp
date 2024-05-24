#include <bits/stdc++.h>
using namespace std;
int a[50],k=0,h=1;
vector<vector<int>> res;
void in(int m){
	vector<int> c;
	k++;
	if(m>1){
		for(int i=1;i<m;i++){
			c.push_back(a[i]);
		}
		res.push_back(c);
	}
	else{
		c.push_back(a[m]);
		res.push_back(c);
	}
	c.clear();
}
void quaylui(int x,int i,int s){
	int j;
	for(j=x;j>=1;j--){
		a[i] = j;
		if(j==s){
			in(i);
		}
		else if(j<s){
			quaylui(j,i+1,s-j);
		}
	}
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		quaylui(n,1,n);
		cout << k << endl;
		for(int i=0;i<=n;i++){
			if(i==0) cout << "(" << res[0][0] << ") ";
			else{
				cout << "(";
				for(int j=0;j<res[i].size();j++){
					cout << res[i][j] << " ";
				}
				cout << ") ";
			}
		}
		k=0;
		res.clear();
		cout << endl;
	}
}