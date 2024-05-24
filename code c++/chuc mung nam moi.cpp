#include<bits/stdc++.h>
using namespace std;
int kiem_tra(string a, string b){
    if(a.size()!=b.size()) return 1;
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    string s[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
	}
    int dem=n;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(!kiem_tra(s[i],s[j])){
                dem--;
				break;
			}
		}
	}
	cout << dem;
}
