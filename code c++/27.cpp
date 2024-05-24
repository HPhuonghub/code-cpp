#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    size_t pos;
    int len = s1.length();
    while(true){
	    pos=s.find(s1);
        if(pos==-1) break;
        s.erase(pos,len);
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}
