#include <bits/stdc++.h>
using namespace std;


int main(){
	int h, w, k;
	cin >> h >> w >> k;
	
	vector<int> v (w, 0);
	for (int i = 0; i < h; i++){
		int t;
		cin >> t;
		for (int j = 0; j < w; j++){
			v[v.size() - j - 1] += t % 10;
			t /= 10;
		}		
	}
	
	int count = 0;
	int sum = 0;
	for (int i = 0; i < w; i++){
		sum += v[i];
		
		if (sum > k){
			sum = v[i];
			count++;
		}
	}
	
	cout << count;

	return 0;
}
