#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
const int length = 25;
int main(){
	//clrscr();
	char fileName[length],output;
	cout<<"Ten tep tin: ";
	cin>>setw(length)>>fileName;
	fstream fileIn(fileName, ios::in);
	if(!fileIn){
		cout << "Khong the tao duoc tep tin "<<fileName<<endl;
		exit(1);
	}
	while(fileIn){
		fileIn>>output;
		cout<<output;
	}
	cout<<endl;
	fileIn.close();
	return 0;
}
