#include <bits/stdc++.h>
using namespace std;

int main(){
	int res;
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			int temp;
			cin >> temp;
			if (temp) {
				res = (abs(3 - i) + abs(3 - j));
			}
		}
	}
	cout << res;
	return 0;
}
	
	
	
