#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char de1[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char de2[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	char de[15];
    int t;
    cin >> t;
    while(t--){
    	int n;
    	double h;
    	cin >> n;
        if(n==101){
    		int m=0;
    		for(int i=0;i<15;i++){
    			cin >> de[i];
    		}
    		for(int i=0;i<15;i++){
    			if(de[i]==de1[i]){
    				m++;
    			}
    		}
    		h=(float)(m*10)/15;
    		cout << fixed << setprecision(2) << h << endl;
    	}
    	if(n==102){
    		int m=0;
    		for(int i=0;i<15;i++){
    			cin >> de[i];
    		}
    		for(int i=0;i<15;i++){
    			if(de[i]==de2[i]){
    				m++;
    			}
    		}
    		h=(float)(m*10)/15;
    		cout << fixed << setprecision(2) << h << endl;
    	}
    }
}
    		
