#include <bits/stdc++.h>
using namespace std;




int test_case(){
	int n, k;
	cin >> n >> k;
		
	int max1 = 0;
	int max2 = 0;
	int temp;
	cin >> temp;
	int old;
	for (int i = 1; i < n; i++){
		old = temp;
		
		cin >> temp;
		if (temp - old > max1){
			max2 = max1;
			max1 = temp - old;
		}
		else if (temp - old > max2){
			max2 = temp - old;
		}
	}
	
	return max(max2,(max1 / 2 + max1 % 2));
}





int main(){
	int t;
	cin >> t;
	vector<int> v;
	for (int i = 1; i <= t; i++){
		int result = test_case();
		v.push_back(result);
	}
	
	for (unsigned i = 0; i < v.size(); i++){
		cout << "Case #" << i+1 << ": " << v[i] << endl;
	}
	return 0;
}
