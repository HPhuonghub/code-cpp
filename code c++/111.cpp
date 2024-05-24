#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define sz(a) int((a).size())
//void FileIO(){
//	freopen("input.txt","r", stdin);
//	freopen("output.txt","w",stdout);
//}
 
int n,m,k;
 
void inp(){
	cin>>n>>m>>k;
	long long a[n],b[m],c[k];
	FOR(i,0,n) cin>>a[i];
	FOR(i,0,m) cin>>b[i];
	FOR(i,0,k) cin>>c[i];
	int i=0,j=0,l=0;
	vector<long long> res;
	while(i<n && j<m && l<k){
		if(a[i]==b[j] && b[j]==c[l]){
			res.push_back(a[i]);
			++i;++j;++l;
		}
		else if(a[i]<=b[j] && a[i]<=c[l]){
			++i;
		}
		else if(b[j]<=a[i] && b[j]<=c[l]){
			++j;
		}
		else
			++l;
	}
	if(sz(res)==0){
		cout<<"-1\n";
		return;
	}
	for(long long x : res)
		cout<<x<<" ";
	cout<<"\n";
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		inp();
	}
}
