#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	for(int i=0;i<a.size();i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='6') b[i]='5';
	}
	long long min= stoll(a) + stoll(b);
	cout << min << " ";
	for(int i=0;i<a.size();i++){
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='5') b[i]='6';
	}
	long long max= stoll(a) + stoll(b);
	cout << max;
}