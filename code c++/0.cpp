#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> n;
		cin.ignore();
	    string s;
	    getline(cin,s);
	    stringstream a(s);
	    string word;
	    vector<string> tu;
	    while(a>>word){
	 	    transform(word.begin(),word.end(),word.begin(),::tolower);
		    tu.push_back(word);
	    }
	    if(n==1){
	        char t=tu[tu.size()-1][0]-32;
	    	cout << t;
	    	tu[tu.size()-1].erase(tu[tu.size()-1].begin() + 0);
	    	cout << tu[tu.size()-1] << " ";
	    	for(int i=0;i<tu.size()-1;i++){
		        char t=tu[i][0]-32;
		        cout << t;
		        tu[i].erase(tu[i].begin() + 0);
		        cout << tu[i];
		        if(i<tu.size()-2){
			    cout << " ";
			    }
		    }
		    cout << endl;
		}
		if(n==2){
			for(int i=1;i<tu.size();i++){
		        char t=tu[i][0]-32;
		        cout << t;
		        tu[i].erase(tu[i].begin() + 0);
		        cout << tu[i];
			    cout << " ";
		    }
		    char t=tu[0][0]-32;
	    	cout << t;
	    	tu[0].erase(tu[0].begin() + 0);
	    	cout << tu[0];
	    	cout << endl;
	    }
	}
}	    	
