#include <iostream>
#include <string.h>
using namespace std;
void nhap(char str[30]){
	gets(str);
}
void xuat(char str[30]){
	puts(str);
}
void chuanhoa(char str[30]){
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]==str[0] || str[i-1]==' '){
		    if(str[i]<'z'&&str[i]>'a'){
			    str[i]=str[i]-32;
			}
		}
		else{
			if(str[i]<'Z'&&str[i]>'A'){
			    str[i]=str[i]+32;
			}
		}	
	}
}
int main(){
	char str[30];
	nhap(str);
    chuanhoa(str);
    xuat(str);
}
