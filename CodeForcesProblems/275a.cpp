#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			arr[i][j] = 1;
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			int temp;
			cin >> temp;
			arr[i][j] += temp;
			if (i) arr[i-1][j] += temp;
			if (i != 2) arr[i+1][j] += temp;
			if (j) arr[i][j-1] += temp;
			if (j != 2) arr[i][j+1] += temp;
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (arr[i][j] % 2){
				cout << 1;
			}
			else cout << 0;
		}
		cout << endl;
	}
	return 0;
}
