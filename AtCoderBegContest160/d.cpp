#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y;
	cin >> n >> x >> y;
	
	vector<int> res (n, 0);
	
	for (int i = 1; i < n; i++){
		for (int j = i+1; j <= n; j++){
			int temp = min(j - i, abs(x - i) + 1 + abs(y - j));
			temp = min(temp, abs(y - i) + 1 + abs(x - j));
			res[temp]++;
		}
	}


	for (int i = 1; i < n; i++){
		cout << res[i] << endl;
	}



	return 0;
}
