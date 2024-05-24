#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int dem=0;
		stringstream a(s);
	    string word;
	    vector<string> tu;
	    while(a>>word){
		    tu.push_back(word);
		    dem++;
        }
        int r,chan=0,le=0;
        for(int i=0;i<tu.size();i++){
        	r=tu[i][tu[i].size()-1]-'0';
        	if(r==1||r==3||r==5||r==7||r==9) le++;
        	else chan++;
        }
        if((dem%2==0&&chan>le)||(dem%2==1&&le>chan)){
        	cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
