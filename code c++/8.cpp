#include <bits/stdc++.h>
using namespace std;

int main(){
	string str("Hello World");
    str.erase(str.begin() + 1, str.begin() + 3);
    cout << str<<endl;
    str.erase(str.begin() + 2, str.begin() +5);
    cout << str;
    return 0;
}
