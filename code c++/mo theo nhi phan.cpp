#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
const int length = 25;
int main(){
	//clrscr();
	char fileName[length],input;
	cout<<"Ten tep tin: ";
	cin>>setw(length)>>fileName;
	fstream fileOut(fileName, ios::out|ios::binary);
	if(!fileOut){
		cout << "Khong the tao duoc tep tin "<<fileName<<endl;
		exit(1);
	}
	do{
		cin>>input;
		fileOut.write(&input,sizeof(input));
	}while((input!='e')&&(fileOut));
	fileOut<<endl;
	fileOut.close();
	return 0;
}
