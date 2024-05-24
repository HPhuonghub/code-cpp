#include <bits/stdc++.h>
using namespace std;

int A[20][20] = {},n;
bool check = false;
void backTrack(int row, int col, string path){
	if(row == n && col == n){
		check = true;
		cout << path << " ";
	}
	int new_row = row + 1; // di xuong D
	int new_col = col + 1; // sang phai R
	if(A[new_row][col] == 1){
		backTrack(new_row, col, path + 'D');
	}
	if(A[row][new_col] == 1){
		backTrack(row, new_col, path + 'R');
	}
}
void solve(){
	check = false;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> A[i][j];
		}
	}
	if(A[1][1] == 0){
		cout << -1 << endl;
		return;
	}
	backTrack(1, 1, "");
	if(check == false){
		cout << -1 << endl;
	}
	cout << endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
}