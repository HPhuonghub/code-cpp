#include <bits/stdc++.h>
using namespace std;
#define x pair<int,int>
bool mv(x p1,x p2){
	if(p1.first == p2.first){
		return p1.second > p2.second;
	}
	return p1.first > p2.first;
}
bool mv1(x p1,x p2){
	if(p1.first == p2.first){
		return p1.second < p2.second;
	}
	return p1.first < p2.first;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	vector<pair<int,int> >v;
	vector<pair<int,int> >p;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]%2==1){
			v.push_back(make_pair(a[i],i));
		}
		else{
			p.push_back(make_pair(a[i],i));
		}
	}
	sort(v.begin(),v.end(),mv);
	sort(p.begin(),p.end(),mv1);
	int m=0,h=0;
	for(int i=1;i<=n;i++){
		if(a[i]%2==1){
			cout << v[m].first << " ";
			m++;
		}
		else{
			cout << p[h].first << " ";
			h++;
		}
	}
}