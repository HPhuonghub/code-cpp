#include <stdlib.h>
#include <fstream.h>
#include <conio.h>
const int length = 25;
void main(){
	clrscr();
	char fileName[length],input;
	cout<<"Ten tep tin: ";
	cin>>setw(length)>>fileName;
	fstream fileOut(filename, ios::out);
	if(!fileOut){
		cout << "Khong the tao duoc tep tin "<<fileName<<endl;
		exit(1);
	}
	do{
		cin>>input;
		fileOut<<input<<' ';
	}while((input!='e')&&(fileOut));
	fileOut<<endl;
	fileOut.close();
	return;
}
